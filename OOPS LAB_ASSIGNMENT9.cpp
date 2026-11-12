#include <iostream>
using namespace std;


//QUESTION 1
template<class T>
T maximum(T a, T b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}
// int main() {
//     cout << "Maximum integer =" << maximum(10, 20) << endl;
//     cout << "Maximum float =" << maximum(5.5, 2.3) << endl;
// }


//QUESTION 2
template<class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// int main() {
//     int x = 10, y = 20;
//     swapValues(x, y);
//     cout << "Swapped values = " << x << " " << y << endl; 
// }


//QUESTION 3
template<class T>
class Calculator {
    T a, b;
    
    public:
    
    Calculator(T x, T y) {
        a = x;
        b = y;
    }
    void add() {
        cout << "Addition = " << a + b << endl;
    }
    
    void sub() {
        cout << "Subtraction = " << a - b << endl;
    }
    
    void mul() {
        cout << "Multiplication = " << a * b << endl;
    }
    
    void division() {
        cout << "Division = " << a / b << endl;
    }
};

// int main() {
//     int a = 10, b = 5;
//     Calculator<int> c(10, 5);
//     c.add();
//     c.sub();
//     c.mul();
//     c.division();
// }


//QUESTION 4 
template<class T>
class ArrayOfOperations {
    T arr[5] = {10, 20, 90, 40, 50};
    public:
    void display() {
        for(int i = 0; i < 5; i++) {
            cout << arr[i] << endl;
            
        }
    }
    
    void Largest() {
        T maxi = arr[0];
        for(int i = 0; i < 5; i++) {
            if(arr[i] > maxi) maxi = arr[i];
        }
        cout << maxi << endl;
    }
};

// int main() {
//     ArrayOfOperations<int> a;
//     a.display();
//     a.Largest();
// }

//QUESTION 5
template<class T1, class T2>
class Pair{
    T1 x;
    T2 y;
    public:
    Pair(T1 a , T2 b) {
        x = a;
        y = b;
    }
    
    void display() {
        cout << x << endl;
        cout << y << endl;
    }
};

// int main() {
//     Pair<int, string> p(90, "Aman");
//     p.display();
// }


//QUESTION 6
template<class T>
class Stack {
    T arr[5];
    int top;
    public:
    Stack() {
        top = -1;
    }
    void push(T val) {
        if(top == 4) {
            cout << "Stack Overflow" << endl;
        }
        top++;
        arr[top] = val;
    }
    
    void pop() {
        if(top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            top--;
        }
    }
    
    void display() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << "Stack elements: ";

            for(int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }

            cout << endl;
        }
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.display();
    
}