// Abstractin Access Specifiers
#include <iostream>
using namespace std;
class ImplementAbstraction{
    private: int a,b;
    public:
    void set(int x,int y){
        a=x;b=y;
    }
    void display(){
        cout<<"A : "<<a<<endl;
        cout<<"B : "<<b<<endl;
    }
};
int main()
{
    ImplementAbstraction obj;
    obj.set(10,20);
    obj.display();
    return 0;
}

// Inheritance
#include<iostream>
using namespace std;
class Parent{
    public:
    int id_p;
    void printID_p(){
        cout<<"Base ID : "<<id_p<<endl;
    }
};
class Child:
public Parent{
    public:
    int id_c;
    void printID_c(){
        cout<<"Child ID : "<<id_c<<endl;
    };
};
int main(){
    Child obj1;
    obj1.id_p = 7;
    obj1.printID_p();
    obj1.id_c = 91;
    obj1.printID_c();
    return 0;
}
