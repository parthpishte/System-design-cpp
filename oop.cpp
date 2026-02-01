#include <iostream>
using namespace std;
class default_class
{

    int a;
    int b; // by default is it private except its constructor
    void display()
    {
        cout << "hello parth" << endl;
    }
};
class public_class
{
public:
    int a; // use . for ref to an obj and :: ref to a class itself
    int b;
    void display()
    {
        cout << "hello parth" << endl;
    }
};
class para_constructor_class
{

    int a;
    int b;

public:
    para_constructor_class(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "a is :" << a << endl;
        cout << "b is :" << b << endl;
    }
};
class static_class
{
public:
    static int a;
    static void show()
    { // static data member are declared outside the class usint type class_name::var_name
        cout << "hello for static class" << endl;
    }
};
int static_class::a = 10;

class encapsulation_class
{
    int a;

public:
    int get_a()
    {
        return this->a;
    }
    void set_a(int a)
    {
        this->a = a;
        cout << this->a;
    }
};
class method_overloading
{
public:
    void display()
    {
        cout << "hello";
    }
    void display(string name)
    {
        cout << "hello" << name;
    }
};
class Parent_class
{
public:
    const int a = 10;
    int b;
    void display()
    {
        cout << "hello from display";
    }
};
class child_class : public Parent_class
{          // to inheeit a claas use    child class:access_tpye class_nbame
    int c; // excutable code only allowd insied mehtods or construcuto
           //  to access data memeber and mehtods use claas_name::member
    // cout<<a<<;
public:
    child_class()
    {
        cout << Parent_class::a;
        Parent_class::display();
    }
};
class method_overrriding
{ // method_overrriding *p;
  // derived d;
  // p=&d;
  //(*p).show(); 
  //aslo can use override keyword
public:
    virtual void show()
    {
        cout << "hello from child class";
    }
};
class derived : public method_overrriding
{
public:
    void show() override
    {
        cout << "hello from derived";
    }
};
class multiple_inheritance_A
{

public:
    int a;
    void show()
    {
        cout << "greetings";
    };
};
class multiple_inheritance_B
{
public:
    int a;
    void show()
    {
        "helo";
    };
};
class multiple_inheritance_C : public multiple_inheritance_A, public multiple_inheritance_B
{
public:
    void display()
    {
        cout << "hello there!" << endl;
        multiple_inheritance_A::show();
    }
};

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function (makes the class abstract)
};

class Circle : public Shape {
public:
    void draw() override {  // Implementing the abstract method
        cout << "Drawing a Circle" << endl;
    }
};
class Destrcuotr_example{
    public:
    ~Destrcuotr_example(){
        cout<<"hello";
    }
}
;
class aggregation{
    public:
    public_class a;
    
};
int main()
{
    default_class A1;
    public_class A2;
    para_constructor_class A3(5, 3);
    encapsulation_class A4;
    static_class::show();
    method_overloading A5;
    child_class A6;
    multiple_inheritance_C A7;
    Circle A8;
    derived A9;
    
    aggregation A10;
    
    


    return 0;
}


//access modifier
//1.public->accessible anywhere
//2.protected->same class and child class
//3.private ->same class only


//obj  of abstract class cannot be created

//friend function in C++ that allows us to access private and protected member functions from outside the class
//child class constr():base class construci(){
//
//}