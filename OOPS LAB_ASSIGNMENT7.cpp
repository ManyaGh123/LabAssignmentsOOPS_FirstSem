
#include <iostream>
using namespace std;
class Animal {
  public:
  void virtual sound() {
      cout << "Animal makes sound" << endl;
  }
};

class Dog: public Animal {
    public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};
class Cat: public Animal {
    public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

// int main()
// {
//   Animal *ptr;
//   Dog d;
//   Cat c;
//   ptr = &d;
//   ptr->sound();
//   ptr = &c;
//   ptr-> sound();
// }


//QUESTION 3
class Shape {
    public:
    void virtual area() {
        cout << "Area." << endl;
    }
};

class Rectangle: public Shape {
  public:
  int length;
  int breadth;
  Rectangle(int length, int breadth) {
      this->length = length;
      this->breadth = breadth;
  }
  void area() override {
      cout << "Area of rectangle:" << length * breadth << endl;
  }
};
class Circle: public Shape {
  public:
  int radius;
  Circle(int radius) {
      this->radius = radius;
  }
  void area() override {
      cout << "Area of Circle" << 22 / 7 * radius * radius << endl;
  }
};

// int main() {
//     Shape *ptr;
//     Rectangle r(10, 20);
//     Circle c(10);
//     ptr = &r;
//     ptr->area();
//     ptr = &c;
//     ptr->area();
// }

//QUESTION 4
class Employee {
  public:
  string name;
  double basicSalary;
  double bonus;
  
  Employee(string name, double basicSalary, double bonus) {
      this-> name = name;
      this->basicSalary = basicSalary;
      this-> bonus= bonus;
  }
  void virtual calcSalary() {
      cout << name << ":" << basicSalary << endl;
  }
};

class PermanentEmployee: public Employee {
    public:
    PermanentEmployee(string name, double salary, double bonus):  Employee(name, salary, bonus)  {
    }
    
    void calcSalary() override {
        cout << name << ":" << basicSalary + bonus << endl;
    }
};

class ContractEmployee: public Employee {
    public:
    ContractEmployee(string name, double salary, double bonus) : Employee(name, salary, bonus)  {
    }
    
    void calcSalary() override {
        cout << name << ":" << basicSalary + bonus << endl;
    }
};

// int main() {
//     Employee *ptr;
//     PermanentEmployee p("Pawan", 12000, 1000);
//     ContractEmployee c("Ram", 10000, 900);
//     ptr = &p;
//     ptr->calcSalary();
//     ptr = &c;
//     ptr->calcSalary();
// }

class Vehicle {
  public:
  void virtual displayInfo() {
      cout << "Info:" << endl;
  }
};

class Car: public Vehicle {
  public:
  void displayInfo() override {
      cout << "Vehicle: Car" << endl;
      cout << "Type: Four wheeler" << endl;
  }
};

class Bike : public Vehicle {
  public:
    void displayInfo() override {
    cout << "Vehicle: Bike" << endl;
    cout << "Type: Two wheeler" << endl;
  }
};
class Bus : public Vehicle {
  public:
    void displayInfo() override {
      cout << "Vehicle: Bus" << endl;
      cout << "Type: Public Transport" << endl;
  }
};

// int main() {
//     Vehicle *ptr;
//     Bike b;
//     Bus bu;
//     ptr = &b;
//     ptr->displayInfo();
//     ptr = &bu;
//     ptr->displayInfo();
// }

class BankAccount{
    public:
    string name;
    float principal, rate, t;
    BankAccount(string name, float principal, float rate, float t) {
        this->name = name;
        this->principal = principal;
        this->rate = rate;
        this->t = t;
        
    }
    void virtual calcInterest() {
        cout << "Calculate interest" << endl;
    }
};

class SavingsAccount : public BankAccount {
    public:
    SavingsAccount(string name, float principal, float rate, float t) : BankAccount(name, principal, rate, t) {}
     void calcInterest() override {
        cout << "Calculate interest: " << (principal * rate * t) / 100 << endl;
    }
};

class FixedDeposit : public BankAccount {
    public:
    FixedDeposit(string name, float principal, float rate, float t) : BankAccount(name, principal, rate, t) {}
    void calcInterest() override {
        cout << "Calculate interest: " << (principal * rate * t) / 100  << endl;
    }
};

// int main() {
//     BankAccount *ptr;
//     SavingsAccount s("Ram", 1000, 5, 2);
//     FixedDeposit f("Shyam", 5000, 4, 3);
//     ptr = &s;
//     ptr->calcInterest();
//     ptr = &f;
//     ptr->calcInterest();
// }


class Person {
    public:
    Person() {
        cout << "Calling constructor" << endl;
    }
    
    virtual ~Person() {
        cout << "Calling Destructor" << endl;
    }
};

class Student: public Person {
    public:
    Student() {
        cout << "Calling Student constructor" << endl;
    }
    
    ~Student() {
        cout << "Calling Student Destructor" << endl;
    }
};

int main() {
    Person *ptr = new Student();
    delete ptr;
}
