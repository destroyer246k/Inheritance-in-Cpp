# Inheritance-in-Cpp
**Aim:**  
To study different types of inheritance in C++ such as single, multiple, multilevel, and hierarchical inheritance, along with the role of access specifiers.

**Tools:**  
GNU g++ compiler for local compilation or any online C++ compiler.


# Theory  

In **Object-Oriented Programming**, inheritance is the process of creating new classes from existing ones. The existing class is called the **base class (or parent class)**, and the new class is called the **derived class (or child class)**. Inheritance promotes **code reusability**, reduces duplication, and establishes relationships between classes.  

A derived class automatically contains the members of the base class, except for constructors, destructors, and private members (though private members can be accessed through public/protected functions of the base class).  

### **Types of Inheritance in C++**
- **Single Inheritance** – One base class and one derived class.  
- **Multiple Inheritance** – One derived class inherits from two or more base classes.  
- **Multilevel Inheritance** – A class is derived from another derived class, forming a chain.  
- **Hierarchical Inheritance** – Multiple classes are derived from a single base class.  

**Access Specifiers** play a key role in inheritance:  
- **Public** – Accessible everywhere.  
- **Private** – Accessible only within the class where it is defined.  
- **Protected** – Accessible in the base class and derived class, but not outside.  

## ** Single Inheritance Syntax**
```cpp
class Base {
    // base class members
};

class Derived : public Base {
    // derived class members
};
```
## **Multiple Inheritance Syntax**
```cpp
class Base1 {
    // base1 members
};

class Base2 {
    // base2 members
};

class Derived : public Base1, public Base2 {
    // derived class members
};
```
## **Multilevel Inheritance Syntax**
```cpp
class Base {
    // base members
};

class Intermediate : public Base {
    // intermediate members
};

class Derived : public Intermediate {
    // derived members
};
```
## **Heirarchical Inheritance Syntax**
```cpp
class Base {
    // base members
};

class Derived1 : public Base {
    // derived1 members
};

class Derived2 : public Derived1 {
    // derived2 members
};

class Derived3 : public Derived1{
    // derived3 members
};
```
## **Access Specifier Syntax**
```cpp
class Base {
public:
    int publicVar;      // accessible everywhere
protected:
    int protectedVar;   // accessible in base + derived
private:
    int privateVar;     // accessible only in base
};

class Derived : public Base {
    // publicVar → remains public
    // protectedVar → remains protected
    // privateVar → not accessible
};

```


## **Program 1: Single Inheritance**

### Logic:  
This program demonstrates single inheritance where a Test class is derived from the Student class. The base class Student takes roll number and name as input. The derived class Test initializes marks for five subjects and calculates total marks and percentage. This shows how the derived class can use data from the base class along with its own members.
### Algorithm:  
1. Start  
2. Define a class Student with members roll and name, and a constructor to take input.  
3. Define a derived class Test which inherits from Student.  
4. Initialize marks in the constructor of Test.  
5. Write a display function to calculate total marks and percentage, and print all details.  
6. In main, create an object of Test and call the display function.  
7. End  

## **Program 2: Multiple Inheritance**

### Logic:  
This program demonstrates multiple inheritance where the `SmartPhone` class inherits from two base classes: `Brand` and `Features`. The `Brand` class stores brand information, while the `Features` class contains functions like calling and messaging. The `SmartPhone` class combines these features and allows entry of the phone model. This shows how a derived class can combine functionalities from more than one base class.
### Algorithm:
1. Start  
2. Define a class Brand with a string member brand.  
3. Define a class Features with functions calling() and messaging().  
4. Define a derived class SmartPhone inheriting from both Brand and Features.  
5. Add a model variable and a display function in SmartPhone.  
6. In main, create an object of SmartPhone, display brand and model, and call the feature functions.  
7. End

## **Program 3: Multilevel Inheritance**

 
### Logic:  
This program demonstrates multilevel inheritance. The base class `ElectricDevice` has functions to power on and power off. The `Computer` class inherits from it and adds members like brand, processor, RAM, and storage. The `Laptop` class is derived from Computer and further adds battery life. This forms a chain of inheritance, showing how properties pass from one level to the next.
### Algorithm:  
1. Start  
2. Define a base class ElectricDevice with functions powerOn() and powerOff().  
3. Define a derived class Computer with members brand, keyboard type, processor, RAM, and storage.  
4. Define another derived class Laptop that inherits from Computer and adds battery life.  
5. In main, create objects of Computer and Laptop, and call their functions.  
6. End 

## **Program 4: Hierarchical Inheritance**

### Logic:  
This program shows hierarchical inheritance where multiple classes are derived from a common base class `Circuits`. The `Clipper` and `Clamper` classes inherit from `Circuits`, and then further specialized classes like `seriesClipper`, `parallelClipper`, `positiveClamper`, and `negativeClamper` inherit from them. Each derived class has its own members and input, but they all share the on() and off() functions from `Circuits`. This shows how one base class can give common functionality to many derived classes.
### Algorithm:  
1. Start  
2. Define a base class Circuits with functions on() and off().  
3. Create a class Clipper that inherits from Circuits and takes resistance and diode as input.  
4. Derive classes seriesClipper and parallelClipper from Clipper, each adding its own configuration input.  
5. Create a class Clamper that inherits from Circuits and takes capacitance and diode as input.  
6. Derive classes positiveClamper and negativeClamper from Clamper, each adding a DC shift.  
7. In main, create objects of these classes and call their functions to test functionality.

## **Program 5: Access Specifiers**

### Logic:  
This program demonstrates the effect of different access specifiers (public, protected, private) in inheritance. The base class `ElectricDevice` has a function powerOff which, if declared private, cannot be accessed by derived classes or main. The `Computer` class has a display function that, if made protected, can only be accessed by derived classes like Laptop but not directly from main. When all members are public, everything works as expected. This shows how access specifiers control visibility and accessibility in inheritance.


# **Conclusion**  
Inheritance lets classes reuse and extend features of other classes, reducing duplication and improving structure. Single inheritance creates a base-to-derived link, multiple inheritance combines features from different classes, multilevel inheritance forms a chain, and hierarchical inheritance shares one base across many classes. Access specifiers (public, private, protected) control how members are shared. Overall, inheritance makes programs more modular, organized, and powerful.

