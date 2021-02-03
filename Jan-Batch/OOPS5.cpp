#include<iostream>
using namespace std;

class base{
    public:
    int a;
    virtual void print(){
        cout<<"base"<<a<<endl;
    }
    
};
class derived: public base{
    public:
    int b;
    //string::npos
    void print(){
        cout<<"derived"<<b<<endl;
    }

};
/*
----base-------
1 x
2 y
3 z
....
*/
int main(){

    derived d1,d2;
    d1.a = 10;
    d1.b = 20;
    d2.a = 10;
    d2.b = 20;
    d1.print();
    
    base* b = &d2;
    b->print();
    //int b = 10;
    //int* a = &b;
    //object(lhs) instance(rhs)
    //base* b = &d;
    /*
    ****** non-virtual (lhs/object/ptr), virtual (rhs/instance/reference) *******
    1. Base-Base -> normal ex:[base b2;  base* b = &b2;]
    2. Base-Derived -> non-virtual (base), virtual (derived) ex:[derived d2; base b3 = &d2]
    3. Derived-Derived -> normal
    4. Derived-Base X
    */
}