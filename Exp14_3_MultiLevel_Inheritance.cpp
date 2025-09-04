#include<iostream>
using namespace std;
class ElectricDevice{
public:
    void powerOn(){
        cout << "Power On" << endl;
    }
    void powerOff(){
        cout << "Power Off" << endl;
    }
};
class Computer:public ElectricDevice{
public:
    string brand;
    string keyboardType;
    string processor;
    int ram;
    int storage;
    Computer(){
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Keyboard Type: ";
        cin >> keyboardType;
        cout << "Enter Processor: ";
        cin >> processor;
        cout << "Enter RAM (in GB): ";
        cin >> ram;
        cout << "Enter Storage (in GB): ";
        cin >> storage;
    }
    // void display(){
    //     cout << "Brand: " << brand << endl;
    //     cout << "Keyboard Type: " << keyboardType << endl;
    //     cout << "Processor: " << processor << endl;
    //     cout << "RAM: " << ram << " GB" << endl;
    //     cout << "Storage: " << storage << " GB" << endl;
    // }
    };
     class Laptop: public Computer{
        string batteryLife;
    public:
        Laptop(){
            cout << "Enter Battery Life (in hours): ";
            cin >> batteryLife;
        }
        // void display(){
        //     Computer::display();
        //     cout << "Battery Life: " << batteryLife << " hours" << endl;
        // }
    };
int main(){
    Computer comp;
    comp.powerOn();
    comp.powerOff();
    cout << endl;
    Laptop lap;
    lap.powerOn();
    // lap.display();
    lap.powerOff();
    return 0;
}
/*
Output:
Enter Brand: MSI
Enter Keyboard Type: Mechanichal
Enter Processor: Ryzen9
Enter RAM (in GB): 32
Enter Storage (in GB): 1024
Power On
Power Off

Enter Brand: MSI        
Enter Keyboard Type: Normal     
Enter Processor: Ryzen7     
Enter RAM (in GB): 16    
Enter Storage (in GB): 1024  
Enter Battery Life (in hours): 24  
Power On
Power Off
*/
