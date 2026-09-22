#include <iostream>
using namespace std;

//QUESTION 1
class Person {
    public:
    string name;
    int age;
};

class Student:public Person {
    public: 
    int roll;
    string course;
};

//-----MAIN FOR QUESTION 1-----
// int main() {
//     Student s;
//     s.name = "Manya";
//     s.age = 21;
//     s.roll = 90;
//     s.course = "MCA";  
//     cout << s.name <<endl;
//     cout << s.age <<endl;
//     cout << s.roll << endl;
//     cout << s.course;
// }


//QUESTION 2
class Person2 {
  public:
  string Name;
};

class Employee:public Person2 {
    public:
    int ID;
};

class Manager:public Employee {
    public:
    string Dept;
    void show() {
        Name = "Sam";
        ID = 1;
        Dept = "BCA";
        cout << Name << endl;
        cout << ID << endl;
        cout << Dept;
    }
};

//-----MAIN FOR QUESTION 2-----
// int main() {
//     Manager m;
//     m.show();
// }


//QUESTION 3
class Academic {
    public:
    double marks;
};

class Sports {
    public:
    int score;
};

class Result:public Academic, public Sports {
    public:
    void display() {
        marks = 190;
        score = 89;
        
        cout << "Result: " << marks + score << endl;
    }
};

//-----MAIN FOR QUESTION 3-----
// int main() {
//     Result r;
//     r.display();
// }


//QUESTION 4 
class Vehicle {
    public:
    string Brand;
    string model;
};

class Car: public Vehicle {
    public:
    int doors;
    
    void display() {
        Brand = "Swift";
        model = "Dzire";
        doors = 4;
        
        cout << Brand << endl;
        cout << model << endl;
        cout << doors << endl;
    }
};

class Bike: public Vehicle {
    public:
    int Capacity;
    
    void display() {
        Brand = "Royal Enfield";
        model = "Classic 280";
        Capacity = 10;
        
        cout << Brand << endl;
        cout << model << endl;
        cout << Capacity << endl;
    }
};

//-----MAIN FOR QUESTION 4-----
// int main() {
//     Bike b;
//     b.display();
//     Car c;
//     c.display();
// }

//QUESTION 5 
class College {
    public:
    string name;
    College(string name) {
        this->name = name;
    }
};

class Department: public College {
    public:
    string dept_Name;
    Department(string c, string d): College(c) {
        this->dept_Name = d;
    }
};

//-----MAIN FOR QUESTION 5-----
int main() {
    Department d("Engineering", "CS");
    cout << d.name << endl;
    cout << d.dept_Name;
}