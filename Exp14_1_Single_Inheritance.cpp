#include<iostream>
using namespace std;
class Student{
public:
    int roll;
    string name;
    Student(){
        cout << "Enter Roll: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }
};
class Test: public Student{
    int marks1,marks2,marks3,marks4,marks5;
public:
    Test(){
        marks1 = 85;
        marks2 = 90;
        marks3 = 95;
        marks4 = 80;
        marks5 = 88;
    }
    void display(){
        int total = marks1 + marks2 + marks3 + marks4 + marks5;
        float percentage = (total / 500.0f) * 100; 
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;
        cout << "Marks4: " << marks4 << endl;
        cout << "Marks5: " << marks5 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
int main(){
    Test t;
    t.display();
    return 0;
}
/*
Output:
Enter Roll: 072
Enter Name: Vishwas
Roll: 72
Name: Vishwas
Marks1: 85
Marks2: 90
Marks3: 95
Marks4: 80
Marks5: 88
Total Marks: 438
Percentage: 87.6%
*/