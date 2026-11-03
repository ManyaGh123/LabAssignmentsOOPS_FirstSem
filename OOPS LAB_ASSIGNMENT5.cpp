#include <iostream>
using namespace std;

class Print {
  public:
  // QUESTION 1
  void display(int number) {
      cout << number << endl;
  }
  
  void display(int number, double val) {
      cout << number << " " << val << " " << endl;
  }
  
  void display(int number, double val, string name) {
      cout << number << " " << val << " " << name << endl;
  }
};
// int main()
// {
//     Print p;
//     p.display(5);
//     p.display(5, 78.5);
//     p.display(5, 89.5, "Sahil");

//     return 0;
// }


//QUESTION 2
class Area {
    public:
    void calc(float side) {
        cout << "Area of square:" << 4 * side << endl;
    }  
    
    void calc(int length, int breadth) {
        cout << "Area of rectangle:" << breadth * length << endl;
    }  
    
    void calc(int radius) {
        cout << "Area of circle:" << 22/ 7 * radius * radius << endl;
    }  
};


// int main() {
//     Area a;
//     a.calc(5);
//     a.calc(10, 20);
//     a.calc(2);
// }


//QUESTION 3
class Calculator {
    public:
    int sum(int a, int b) {
        return a + b;
    }
    
    int sum(int a, int b, int c) {
        return a + b + c;
    }
    
    int sum(double a, double b) {
        return a + b;
    }
};

// int main() {
//     Calculator c;
//     cout << c.sum(10, 20) << endl;
//     cout << c.sum(10, 20, 30) << endl;
//     cout << c.sum(67.5, 89.7);
// }


//QUESTION 4
class Student {
    public:
    void result(int marks) {
        cout << "Marks:" << marks << endl;
    }
    
    void result(int subject1, int subject2) {
        cout << "Average:" << (subject1 + subject2) / 2 << endl;
    }
    
    void result(int subject1, int subject2, int subject3) {
        cout << "Average:" << (subject1 + subject2 + subject3) / 3 << endl;
    }
};

// int main() {
//     Student s;
//     s.result(90);
//     s.result(89, 90);
//     s.result(88, 89, 90);
// }

//QUESTION 5
class Maximum {
    public:
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }
    
    int findMax(int a, int b, int c) {
        return findMax(findMax(a, b), c);
    }
    
    int findMax(double a, double b) {
        return (a > b) ? a : b;
    }
};

// int main() {
//     Maximum m;
//     m.findMax(10, 77);
//     m.findMax(10, 20, 39);
//     m.findMax(19.67, 78.55);
// }

//QUESTION 6
class ShoppingBill {
  public:
  void calcBill(int quantity, float price) {
      cout << quantity * price;
  }
  
  void calcBill(int quantity1, float price1, int quantity2, float price2) {
      float bill1 = quantity1 * price1;
      float bill2 = quantity2 * price2;
      cout << bill1 + bill2;
  }
  
  void calcBill(double bill, float discount) {
      cout << bill * discount / 100;
  }
};

// int main() {
//     ShoppingBill s;
//     s.calcBill(5, 900.75);
//     s.calcBill(4, 500.50, 5, 800.75);
//     s.calcBill(15000.0, 10);
// }


class Student2 {
    public:
    
    void setData(int roll, string name = "NA", int marks = 0) {
        cout << roll << " " << name << " " << marks << endl;
    }
    
     void setData(int roll, string name) {
        cout << roll << " " << name << marks << endl;
    }
    
     void setData(int roll, string name, float marks) {
        cout << roll << " " << name << " " << marks << endl;
    }
};

int main() {
    Student2 s;
    s.setData(77);
    s.setData(55, "Sania");
    s.setData(66, "Ravi", 99);
}
