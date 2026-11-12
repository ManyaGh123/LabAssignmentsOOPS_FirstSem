#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
using namespace std;


//QUESTION 1
class VectorOperations {
    public:
    vector<int> v;
    void input() {
        int x;
        cout << "Enter 5 integers" << endl;
        for(int i = 0; i < 5; i++) {
            cin >> x;
            v.push_back(x);
        }
    }
    
    void display() {
        int sum = 0;
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << endl;
            sum += v[i];
        }
        
        cout << sum;
    }
};


// int main() {
//     VectorOperations v;
//     v.input();
//     v.display();
    
// }


class ListOperations {
    public:
    list<int> l;
    void insert() {
        l.push_front(20);
        l.push_back(30);
        l.push_front(20);
        l.push_back(50);
        
    }
    void removeEl() {
        l.remove(30);
    }
     void display() {
        for(int x : l) {
            cout << x << " ";
        }
        cout << endl;
    }
    
};

// int main() {
//     ListOperations l;
//     l.insert();
//     l.removeEl();
//     l.display();
// }

class SortSearch {
    public:
    vector<int> v;
    
    void input() {
        int x;
        cout << "Enter the number: " << endl;
        for(int i = 0; i < 5; i++){
            cin >> x;
            v.push_back(x);
        }    
    }
    
    void sortArray() {
        sort(v.begin(), v.end());
        for(int x: v) {
            cout << x << endl;
        }
    }
    
    void search() {
        int key;
        cout << "Enter the key: " << endl;
        cin >> key;
        if(binary_search(v.begin(), v.end(), key)) {
            cout << "Element found" << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
};

// int main() {
//     SortSearch s;
//     s.input();
//     s.sortArray();
//     s.search(); 
// }


//QUESTION 4
class Operations {
    public:
    stack<int> s;
    queue<int> q;
    
    void stackOperations() {
        s.push(10);
        s.push(20);
        s.push(30);
        cout << "Stack top = " << s.top() << endl;
        s.pop();
        cout << "After pop = " << s.top() << endl;
    }
    
    void queueOperations() {
        q.push(20);
        q.push(23);
        cout << "Queue front = " << q.front() << endl;
        q.pop();
        cout << "After pop = " << q.front() << endl;
    }
};

// int main() {
//     Operations o;
//     o.stackOperations();
//     o.queueOperations();
// }

class Student {
    map<int, string> m;
    public:
    
    void input() {
        int n;
        int roll;
        string name;
        cout << "Enter number of students:";
        cin >> n;
        
        for(int i = 0; i < n; i++) {
            cout << "Enter roll and name: ";
            cin >> roll >> name;
            m[roll] = name;
        }
    }
    
    void search() {
        int roll;
        cout << "Enter roll to search" << endl;
        cin >> roll;
        if(m.find(roll) != m.end()) {
            cout << "Name = " << m[roll] << endl;
        } else {
            cout << "Student not found" << endl;
        }
    }
    
    void display() {
        cout << "All records" << endl;
        for(auto x: m) {
          cout << x.first << " " << x.second << endl;  
        }
    }
};

int main() {
    Student s;
    s.input();
    s.search();
    s.display();
}