//preprocessor directives
#include<iostream>
#define pi 3.14
#define int float
using namespace std;
class complex{
    public:
    int real = 0;
    int imag = 0;

    // int* ptr = nullptr;

    complex(){
        real = 0;
        imag = 0;

        //initialize memory
        // ptr = new int;
    }

    complex(int real, int imag){
        this->real = real;
        this->imag = imag;
    }

    complex(complex& c){
        real = c.real;
        imag = c.imag;
    }

    bool isEqual(complex other){

        if(this->real == other.real && this->imag == other.imag){
            return true;
        }

        return false;
    }

    // ~complex(){
    //     cout<<"Destructor called"<<endl;

    //     //memory leakage
    //     // delete ptr;
    // }
};
//predeclaration
class Box2;
class Box {
   double width;
   
   public:
      void setWidth( double wid ){
          width = wid;
      };
      friend bool isEqual(Box b1, Box2 b2);
};
class Box2 {
   double width;
   
   public:
      void setWidth( double wid ){
          width = wid;
      }
      friend bool isEqual(Box b1, Box2 b2);
};
bool isEqual(Box b1, Box2 b2){
    if(b1.width == b2.width){
        return true;
    }
    return false;
}

class BankAccount{
    public:
    double amt = 0;
    static int roi;
    static int count;

    BankAccount(){
        count++;
    }

    double totalamt(){
        amt = amt+(amt*roi/100);
        return amt;
    }

    static void print(){
        cout<<count<<endl;
    }

    
};

int BankAccount::count = 0;
int BankAccount::roi = 0;
int main(){

    //5+3i
    complex c1(5,3);

    //5+3i
    complex c2(c1);

    //3+5i
    complex c3(3,5);

    // *c3.ptr = 10;

    cout<<"c2 and c1 are: "<<c2.isEqual(c1)<<endl;

    Box b1;
   b1.setWidth(10.0);
   
   Box2 b2;
   b2.setWidth(10.0);

   cout<<"isEqual: "<<isEqual(b1, b2);

   Box* ptrBox = &b1;
   b1.setWidth(30.0);
   ptrBox->setWidth(20.0);
   cout<<endl;

   BankAccount a1, a2, a3;
   BankAccount::roi = 2;
   a1.amt  = 10;
   a2.amt = 20;

   cout<<"size is: "<<sizeof(a1)<<endl;

   cout<<"count of account is:"<<BankAccount::count<<endl;

   cout<<a1.totalamt();

   BankAccount::print();
   
   return 0;
}