// Write a C++ program to swap the numbers without using third variable
#include<iostream>
using namespace std;
int main(){
    int a = 10;int b = 20;
    // Using +-
    a = a + b;
    b = a - b;
    a = a - b;
    // Using */
    a = a * b;
    b = a / b;
    a = a / b;
    // Using ^
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"A : "<<a<<" B : "<<b<<endl;
    return 0;
}