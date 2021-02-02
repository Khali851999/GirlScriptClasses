#include<iostream>
using namespace std;
class base{
    public:
    int a;
    void print(){
        cout<<"base"<<a<<endl;
    }
};
class derived: public base{
    public:
    int b;
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
    //object instance
    /*
    ******non-virtual (base), virtual (derived)*******
    1. BB -> normal
    2. BD -> non-virtual (base), virtual (derived)
    3. DD -> normal
    4. DB X
    */
}