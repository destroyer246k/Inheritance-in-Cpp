#include<iostream>
using namespace std;
class Ciruits{
public:
    void on(){
        cout << "Circuits On" << endl;
    }
    void off(){
        cout << "Circuits Off" << endl;
    }
};
class Clipper:public Ciruits{
public:
    int resistance;
    string diode;
    Clipper(){
        cout << "Enter Resistance (in ohms): ";
        cin >> resistance;
        cout << "Enter Diode Type: ";
        cin >> diode;
    }
};
class seriesClipper: public Clipper{
    string configuration;
public:
    seriesClipper(){
        cout << "Enter Series Configuration (Positive/Negative): ";
        cin >> configuration;
    }
};
class parallelClipper: public Clipper{
    string configuration;
public:
    parallelClipper(){
        cout << "Enter Parallel Configuration (Positive/Negative): ";
        cin >> configuration;
    }
};
class Clamper: public Ciruits{
    int capacitance;
    string diode;
public:
    Clamper(){
        cout << "Enter Capacitance (in microfarads): ";
        cin >> capacitance;
        cout << "Enter Diode Type: ";
        cin >> diode;
    }
};
class positiveClamper: public Clamper{
    int dcShift;
public:
    positiveClamper(){
        cout << "Enter DC Shift in +ve (in volts): ";
        cin >> dcShift;
    }
};
class negativeClamper: public Clamper{
    int dcShift;
public:
    negativeClamper(){
        cout << "Enter DC Shift in -ve (in volts): ";
        cin >> dcShift;
    }
};
int main(){
    seriesClipper sc;
    sc.on();
    sc.off();
    cout << endl;
    parallelClipper pc;
    pc.on();
    pc.off();
    cout << endl;
    positiveClamper posc;
    posc.on();
    posc.off();
    cout << endl;
    negativeClamper negc;
    negc.on();
    negc.off();
    return 0;
}
/*
Output:
Enter Resistance (in ohms): 1000
Enter Diode Type: Si
Enter Series Configuration (Positive/Negative): Positive
Circuits On
Circuits Off

Enter Resistance (in ohms): 1000
Enter Diode Type: Ge
Enter Parallel Configuration (Positive/Negative): Negative
Circuits On
Circuits Off

Enter Capacitance (in microfarads): 100
Enter Diode Type: Si
Enter DC Shift in +ve (in volts): 10
Circuits On
Circuits Off

Enter Capacitance (in microfarads): 10
Enter Diode Type: Ge
Enter DC Shift in -ve (in volts): 5 
Circuits On
Circuits Off
*/