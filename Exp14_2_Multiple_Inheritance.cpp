#include<iostream>
using namespace std;
class Brand{
public:
    string brand;
    Brand(){
      brand = "SAMSUNG";
    }

};

class Features{
public:
void calling(){
    cout << "Calling..." << endl;
    
}
void messaging(){
    cout << "Messaging..." << endl;
}
};

class SmartPhone: public Brand, public Features {
    string model;
public:
    SmartPhone(){
        cout << "Enter Model: ";
        cin >> model;
    }
    void display(){
        cout << "Brand: "<<brand<<endl;
        cout << "Model: "<<model<<endl;
    }
};
int main(){
    SmartPhone sp;
    sp.display();
    sp.calling();
    sp.messaging();
    return 0;
}
/*
Output:
Enter Model: S23FE
Brand: SAMSUNG
Model: S23FE
Calling...
Messaging...
*/