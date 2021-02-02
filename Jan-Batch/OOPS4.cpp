#include<iostream>
using namespace std;
class Coordinate{
    public:
    int x;
    int y;

    void print(int x, int y){
        cout<<x<<":"<<y<<endl;
    }

    void print(int y){
        cout<<x<<endl;
    }
};

class operations{
    public:
    string x;

    string operator - (string y){
        return x+y+y;
    }
};

class complex{
    public:
    int real;
    int imag;

    complex(){
        real = 0;
        imag = 0;
    }

    complex(int real, int imag){
        this->real =  real;
        this->imag = imag;
    }

    complex operator + (complex c2){
        complex c3;
        c3.real = real + c2.real;
        c3.imag = imag + c2.imag;
        return c3;
    }

};

// int fun(int* ptr, int n){
//     int i=0;
//     while(i<n){
//         cout<<*ptr;
//         ptr++;
//         i++;
//     }
// }
int main(){

    // int arr[3] = {1,2,3};
    // fun(arr,3);

    // int* ptr;//address of data member of type int
    Coordinate c;
    c.x = 10;
    c.y = 20;

    c.print(10);

    Coordinate* ptr;//address of type par (pointer to class)
    ptr = &c;

    cout<<ptr<<ptr->x<<ptr->y<<endl;

    operations o;
    o.x = "a";

    cout<<o - "b"<<endl;;


    complex c1(2,3);
    complex c2(3,2);

    complex c3 = c1 + c2;
    cout<<c3.real<<"+"<<c3.imag<<"i"<<endl;


    //POLY PHORMISM: plug: 10W, 65W, 40W
    //many forms
    /*
    1. Compile time / static binding / early
    - Operator Overloading
    - Function Overloading
    2. Run time / dynamic binding/ late  -> [OOPS5.cpp]
    - Overriding(Virtual functions)
    */

    string a = "abc", b = "def";
    int d = 10, e = 20;

    cout<<a + b<<endl;
    cout<<d + e<<endl;

    //cout<<a-b<<endl; //invalid (compile time)

    /*int a[10]; 
    cout<<a[100]<<endl;  //runtime error
    */

}