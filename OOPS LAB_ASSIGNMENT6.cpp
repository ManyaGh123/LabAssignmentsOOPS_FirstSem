
#include <iostream>
using namespace std;

//QUESTION 1
class Counter {
    public:
    int count;
    
    Counter(int c) {
        count = c;
    }
    
    void operator++() {
        count++;
    }
    
    void display() {
        cout << count << endl;
    }
};


// int main()
// {
//     Counter c(10);
//     cout << "Before increment" << endl;
//     c.display();
    
//     ++c;
    
//     cout << "After increment" << endl;
//     c.display();
// }


//QUESTION 2
class Number {
    public:
    int value;
    
    Number(int v) {
        value = v;
    }
    
    void operator--() {
        value--;
    }
    
    void display() {
        cout << value << endl;
    }
};


// int main()
// {
//     Number n(10);
//     cout << "Before decrement" << endl;
//     n.display();
    
//     --n;
    
//     cout << "After decrement" << endl;
//     n.display();
// }


//QUESTION 3
class Number2 {
    public:
    int value;
    
    Number2(int v) {
        value = v;
    }
    
    Number2 operator+(Number2 n) {
        Number2 temp(0);
        temp.value = value + n.value;
        return temp;
    }
    
    void display() {
        cout << value << endl;
    }
};



// int main()
// {
//     Number2 n1(10), n2(20);
//     Number2 n3 = n1 + n2;
//     n3.display();
// }


//QUESTION 4
class Num {
    public:
    int number;
    
    Num(int n) {
      number = n;  
    }
    
    Num operator+(Num n) {
        Num temp(0);
        temp.number = number + n.number;
        return temp;
    } 
    
    Num operator-(Num n) {
        Num temp(0);
        temp.number = number - n.number;
        return temp;
    } 
    
    void display() {
        cout << number << endl;
    }
};

// int main() {
//     Num n1(30) , n2(20);
//     Num n3 = n1 + n2;
//     n3.display();
//     Num n4 = n1 - n2;
//     n4.display();
// }

//QUESTION 5
class Complex {
    public:
    int real;
    int img;
    
    Complex(int r, int i) {
        real = r;
        img = i;
    }
    
    Complex operator+(Complex c) {
        Complex temp(0, 0);
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    
    Complex operator-(Complex c) {
        Complex temp(0, 0);

        temp.real = real - c.real;
        temp.img = img -  c.img;

        return temp;
    }
    
    void display() {
        cout << real << "+" << img << "i" << endl;
    }
};

// int main() {
//     Complex c1(3, 4);
//     Complex c2(2, 5);

//     Complex c3 = c1 + c2;

//     cout << "First number: ";
//     c1.display();

//     cout << "Second number: ";
//     c2.display();

//     cout << "Result: ";
//     c3.display();
// }


//QUESTION 6
class Student {
    public:
    float cgpa;
    
    Student(float c) {
       cgpa = c; 
    }
    
    bool operator==(Student s) {
        return cgpa == s.cgpa;
    }
    
    bool operator>(Student s) {
        return cgpa > s.cgpa;
    }
};

int main() {
    Student s1(8.5), s2(9.0);

    if (s1 == s2) {
        cout << "Both students have same CGPA" << endl;
    }
    else {
        cout << "Both students have different CGPA" << endl;
    }

    if (s1 > s2) {
        cout << "Student 1 has higher CGPA" << endl;
    }
    else {
        cout << "Student 2 has higher CGPA" << endl;
    }

}