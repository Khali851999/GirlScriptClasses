#include<iostream>
using namespace std;
//Pure virtual functions / interface / abstract class
class car{
    public:
    car(){
        cout<<"base"<<endl;
    }
    //pure virtual function
    virtual void start() = 0;
    virtual void stop(){
        //virtual
    }
};
class maruti:public car{
    public:
    void start(){
        //key card
    }
};
class bmw:public car{
    public:
    bmw(){
        cout<<"derived"<<endl;
    }
    void start(){
        //touch button
    }
};
int main(){

    bmw b;
    b.start();

    
}