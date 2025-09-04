#include<iostream>
using namespace std;
class ElectricDevice{
public:
    void powerOn(){
        cout << "Power On" << endl;
    }
public: //if private only accessible inside ElectricDevice
    void powerOff(){
        cout << "Power Off" << endl;
    }
   

};
class Computer:public ElectricDevice{
protected:
    string brand = "DELL";
public:
    string keyboardType;
    string processor;
    int ram;
    int storage;
    Computer(){
        cout << "Enter Keyboard Type: ";
        cin >> keyboardType;
        cout << "Enter Processor: ";
        cin >> processor;
        cout << "Enter RAM (in GB): ";
        cin >> ram;
        cout << "Enter Storage (in GB): ";
        cin >> storage;
    }
public: //if protected only accessible outside Computer
    void display(){
        cout << "Brand: " << brand << endl;
        cout << "Keyboard Type: " << keyboardType << endl;
        cout << "Processor: " << processor << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
    }
    };
     class Laptop: public Computer{
        string batteryLife;
    public:
        Laptop(){
            cout << "Enter Battery Life (in hours): ";
            cin >> batteryLife;
        }
        void display(){
            Computer::display();
            cout << "Battery Life: " << batteryLife << " hours" << endl;
        }
    };
int main(){
    Computer comp;
    // comp.powerOn();
    // comp.powerOff();
    comp.display(); //if protected at line 33 --->  error: 'display' is a protected member of 'Computer'
    cout << endl;
    Laptop lap;
    lap.powerOn();
    lap.display();//if protected at line 33 ---> Works fine as display() is public in Laptop
    lap.powerOff();//if Private at line 8 --->  error: 'powerOff' is a private member of 'ElectricDevice'
    return 0;
}
/*
Output:

private at line 8

Exp14_5.cpp: In function 'int main()':
Exp14_5.cpp:62:18: error: 'void ElectricDevice::powerOff()' is private within this context
     lap.powerOff();//error: 'powerOff' is a private member of 'ElectricDevice'
                  ^
Exp14_5.cpp:9:10: note: declared private here
     void powerOff(){
          ^~~~~~~~

protected at line 33
Exp14_5.cpp: In function 'int main()':
Exp14_5.cpp:58:18: error: 'void Computer::display()' is protected within this context
     comp.display(); //if protected at line 33 --->  error: 'display' is a protected member of 'Computer'
                  ^
Exp14_5.cpp:34:10: note: declared protected here
     void display(){
          ^~~~~~~
if all public
Same as Exp14_3.cpp
*/
