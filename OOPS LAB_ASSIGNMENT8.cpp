#include <iostream>
using namespace std;


// QUESTION 1
int main()
{
    int a;
    int b;
    
    cout << "Enter first number" << endl;
    cin >> a;
    
    cout << "Enter second number" << endl;
    cin >> b;
    
    try {
        if(b == 0) {
            throw b;
        }
        
        cout << "Result = " << float(a) / b << endl;
    }
    catch (int x) {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    
    return 0;
}

// QUESTION 2
int main() {
    int age;
    
    cout << "Enter age of the person" << endl;
    cin >>  age;
    
    try {
        if(age < 0) {
            throw age;
        }
        
        cout << "Age = "  << age << endl;
    }
    catch (int x) {
        cout << "Error: Enter positive age" << endl;
    }
}


// QUESTION 3 
int main() {
    int i;
    
    cout << "Enter the integer" << endl;
    cin >> i;
    
    try {
        if (i < 0) {
            throw 1;
        } else if (i > 100) {
            throw 2;
        }
        cout << "Integer = " << i << endl;
    }
    catch(int x) {
        if (x== 1) {
            cout << "Error: Number cannot be negative" << endl;
        } else if (x == 2) {
            cout << "Error: Number cannot exceed 100" << endl;
        }
    }
}


// QUESTION 4
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;
    
    cout << "Enter index: ";
    cin >> index;

    try {
        if (index < 0 || index >= 5) {
            throw index;
        }
        cout << arr[index] << endl;
    } 
    catch(int x) {
        cout << "Error: Invalid array index." << endl;
    }
}


//QUESTION 5
class LibraryAccount {
    int availableBooks;
    public:
    
    LibraryAccount(int b) {
        availableBooks = b;
    }
    void issueBook(int amount) {
        try {
            if(amount > availableBooks) {
                throw amount;
            }
            
            availableBooks -= amount;
            cout << "Books issued successfully." << endl;
            cout << "Remaining books = " << availableBooks << endl;
        }
        catch(int x) {
            cout << "Error: Not enough books available" << endl;
        }
    }
};

// int main() {
//     LibraryAccount obj(10);
//     int amount;
//     cout << "Enter no of books" << endl;
//     cin >> amount;
//     obj.issueBook(amount);
// }


///QUESTION 6
class Student {
    int marks[5];
    public:
    void input() {
        int sum = 0;
        try {
            for(int i = 0; i < 5; i++) { 
                cout << "Enter: " << endl;
                cin >> marks[i];
                if(marks[i] > 100 || marks[i] < 0) {
                    throw marks[i];
                }
                sum += marks[i];
            }
             cout << "Average = " << sum / 5.0 << endl;
        }
        catch(int x) {
            cout << "Error: Invalid marks" << endl;
        }
    }
};

int main() {
    Student s;
    s.input();
}