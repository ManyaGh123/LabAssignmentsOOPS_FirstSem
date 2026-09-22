
#include <iostream>
using namespace std;

//QUESTION 1
class Solution {
    public:
    void display() {
        cout << "Hello" << endl << "World";
    }

// QUESTION 2  
    int temp() {
        float c;
        cout << "Enter the temperature in Celsius: ";
        cin >> c;
        int convert = ((9 * c) / 5) + 32;
        return convert;
    }

//QUESTION 3
    void loops() {
        for (int i = 0; i <= 5; i++) {
            cout << i;
        }
        
        int a = 0;
        while (a < 5) {
            cout << a;
            a++;
        }
        
        do {
           cout << a; 
           a++;
        } while (a < 5);
    }
    
};

//-----MAIN FOR QUESTION 1, 2, 3-----
// int main() {
//     Solution s;

//     // display()
//     s.display();
//     cout << endl;

//     // temp()
//     int result = s.temp();
//     cout << "Temperature in Fahrenheit: " << result << endl;

//     // loops()
//     s.loops();

// }

//QUESTION 4
struct Student {
    string Name;
    int RollNo;
    string Degree;
    int Hostel;
    float CurrentCGPA;
    void addDetails() {
        cout << "Adding details" << endl;
    }

    void updateDetails() {
        cout << "Updating details" << endl;
    }

    void updateCGPA() {
        cout << "Updating CGPA" << endl;
    }

    void updateHostel() {
        cout << "Updating Hostel" << endl;
    }

    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Hostel: " << Hostel << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;
    }
};

//-----MAIN FOR QUESTION 4-----
// int main() {
//     Student s;
//     s.Name = "Manya";
//     s.RollNo = 101;
//     s.Degree = "MCA";
//     s.Hostel = 5;
//     s.CurrentCGPA = 8.5;
//     s.addDetails();
//     s.updateDetails();
//     s.updateCGPA();
//     s.updateHostel();
//     s.displayDetails();
// }

//QUESTION 5
    class Student1 {
        private:
        string Name;
        int roll;
        public:
        string degree;
        int hostel;
        float cgpa;
        
        void addDetails() {
            cout << "This function adds details" << endl;
        }
        void updateDetails() {
            cout << "This function updates details" << endl;
        }
        void updateCGPA() {
            cout << "This function updates CGPA" << endl;
        }
        void updateHostel() {
            cout << "This function updates Hostel" << endl;
        }
        void displayDetails() {
            cout << "This function diaplays details" << endl;
        }
    };

//-----MAIN FOR QUESTION 5-----
//     int main() {
//     Student s;

//     s.degree = "MCA";
//     s.hostel = 5;
//     s.cgpa = 8.5;

//     cout << "Degree: " << s.degree << endl;
//     cout << "Hostel: " << s.hostel << endl;
//     cout << "CGPA: " << s.cgpa << endl;

//     s.addDetails();
//     s.updateDetails();
//     s.updateCGPA();
//     s.updateHostel();
//     s.displayDetails();

// }


//QUESTION 6
#include <iostream>
using namespace std;
class Student2 {
    private:
        void privateFunction() {
            cout << "Private function is called" << endl;
        }
    public:
        void publicFunction() {
            cout << "Public function is called" << endl;
            privateFunction();
        }
};

//-----MAIN FOR QUESTION 6-----
// int main() {
//     Student s;
//     s.publicFunction();
//     return 0;
// }


//QUESTION 7
class Complex {
    public:
    int real;
    int imaginary;
    void set() {
        real = 20;
        imaginary = 10;
    }
    void display() {
        cout << "Real" << real << endl;
        cout << "Imaginary" << imaginary << endl;
    }
    int Sum(int a , int b) {
        return a + b;
    }
};
    
//-----MAIN FOR QUESTION 7-----
// int main()
// {
//    Complex s;
//    cout << s.Sum(10, 20);
// }


namespace First {
    int value = 10;
    void display() {
        cout << "Display from First namespace" << endl;
    }
}
namespace Second {
    int value = 20;

    void display() {
        cout << "Display from Second namespace" << endl;
    }
}


//-----MAIN FOR QUESTION 8-----
int main() {
    cout << "First value: " << First::value << endl;
    First::display();
    cout << "Second value: " << Second::value << endl;
    Second::display();
}