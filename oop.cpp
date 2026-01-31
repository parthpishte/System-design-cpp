#include<iostream>
using namespace std;
class default_class{
    
    int a;
    int b;                            //by default is it private except its constructor
    void display(){
        cout<<"hello parth"<<endl;
    }
};
class public_class{
    public:
    int a;                           //use . for ref to an obj and :: ref to a class itself
    int b;
    void display(){
        cout<<"hello parth"<<endl;
    }
};
class para_constructor_class{
    
    int a;
    int b;
    public:
    para_constructor_class(int a,int b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"a is :"<<a<<endl;
         cout<<"b is :"<<b<<endl;
    }

};
class static_class{
    public:
    static int a;
    static void show(){  // static data member are declared outside the class usint type class_name::var_name
        cout<<"hello for static class"<<endl;
    }
};
    int static_class::a=10;

class encapsulation_class{
    int a;
    public:
    int get_a(){
        return this->a;
    }
    void set_a(int a){
        this->a=a;
        cout<<this->a;
    }

};
class method_overloading{
        public:
        void display(){
            cout<<"hello";
        }
        void display(string name){
            cout<<"hello"<<name;
        }
};
int main(){
    default_class A1;
    public_class A2;
    para_constructor_class A3(5,3);
    encapsulation_class A4;
    static_class::show();
    method_overloading A5;
   
    
    
    return 0;
}
