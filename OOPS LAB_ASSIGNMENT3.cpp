
#include <iostream>
using namespace std;

//QUESTION 1
class Student {
    string name;
    int marks;
    public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }
    friend void display(Student s);
};
void display(Student s) {
        cout << "Name: " <<s.name<< endl;
        cout << "Marks: " << s.marks;
}

//-----MAIN FOR QUESTION 1-----
// int main() {
//     Student s("Manya", 95);
//     display(s);
// }


class Number {
    int a;
    int b;
    public:
    Number(int x, int y) {
        a = x;
        b = y;
    }
    friend int sum(Number n);
};
int sum(Number n) {
     return (n.a + n.b);
}

//QUESTION 3
class Employee {
    int salary;
    public:
    Employee(int s) {
        salary = s;
    }
    friend void compare(Employee e1, Employee e2);
};
void compare(Employee e1, Employee e2) {
    int a = e1.salary;
    int b = e2.salary;
    if (a > b) {
        cout << "Employee 1 has higher salary" << endl;
    } else {
        cout << "Employee 2 has higher salary";
    }
}

class Student2 {
    static int count;
    public:
    Student2() {
        count++;
    }
    static void display() {
        cout << "Count for objects: "<< count ;
    }
};

int Student2::count = 0;


//QUESTION 5
class Bank {
    double accNo;
    double balance;
    static int totalAccs;
    
    public:
    Bank(double ac, double b) {
        accNo = ac;
        balance = b;
        totalAccs++;
    }
    friend void displayDetails(Bank x);
    static void displayAcc() {
        cout << "TOTAL ACCOUNTS: " <<totalAccs << endl;
    }
};
void displayDetails(Bank x) {
    cout << "ACCOUNT NO: " << x.accNo << endl;
    cout << "BALANCE: " << x.balance << endl;
}

int Bank::totalAccs = 0;
int main()
{
   Bank b1(100090, 89899);
   Bank b2(484798, 21389);
   Bank b3(326838, 24343);
   displayDetails(b1);
   displayDetails(b2);
   displayDetails(b3);
   Bank::displayAcc();
}