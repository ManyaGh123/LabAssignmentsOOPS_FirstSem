#include <iostream>
using namespace std;

//QUESTION 1
class Student1 {
    string name;
    int rollNo;

    public:
    Student1() {
        name = "Manya";
        rollNo = 101;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

//QUESTION 2
class Rectangle {
    int length;
    int breadth;

    public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    void displayArea() {
        cout << "Area = " << length * breadth << endl;
    }
};


//QUESTION 3
class Employee {
    string name;
    int id;
    float salary;

    public:
    Employee(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};


//QUESTION 4
class Box {
    int length;
    int width;
    int height;

    public:
    Box() {
        length = 1;
        width = 1;
        height = 1;
    }
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    void volume() {
        cout << "Volume = "
             << length * width * height
             << endl;
    }
};


//QUESTION 5
class Student2 {
    string name;
    int rollNo;
    float cgpa;

    public:
    Student2() {
        name = "Unknown";
        rollNo = 0;
        cgpa = 0.0;
    }
    Student2(string n, int r) {
        name = n;
        rollNo = r;
        cgpa = 0.0;
    }
    Student2(string n, int r, float c) {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};


//QUESTION 6
class Complex {
    int real;
    int imaginary;

    public:
    Complex() {
        real = 0;
        imaginary = 0;
    }
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }
    void display() {
        cout << "Complex Number: "<< real << " + "<< imaginary << "i"<< endl;
    }
};


//QUESTION 7
class Demo {
    public:
    Demo() {
        cout << "Constructor called" << endl;
    }
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

void test() {
    cout << "Inside test()" << endl;
    Demo d2;
    cout << "End of test()" << endl;
}


int main() {

    //QUESTION 1
    Student1 s1;
    s1.display();

    //QUESTION 2
    Rectangle r(10, 5);
    r.displayArea();

    //QUESTION 3
    Employee e("Manya", 101, 50000);
    e.display();

    //QUESTION 4
    Box b1;
    b1.volume();
    Box b2(10, 5, 2);
    b2.volume();

    //QUESTION 5
    Student2 st1;
    Student2 st2("Manya", 101);
    Student2 st3("Rahul", 102, 8.7);
    st1.display();
    cout << endl;
    st2.display();
    cout << endl;
    st3.display();

    //QUESTION 6
    Complex c1;
    Complex c2(10, 5);
    c1.display();
    c2.display();

    //QUESTION 7
    cout << "Creating objects..." << endl;
    Demo d1;
    Demo d3;
    cout << "End of main block" << endl;
    cout << "Inside main()" << endl;
    Demo d4;
    cout << "Calling test()" << endl;
    test();
    cout << "Back in main()" << endl;
}