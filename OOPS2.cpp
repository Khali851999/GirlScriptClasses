#include<iostream>
using namespace std;
class complex{
    public:
    int real = 0;
    int imag = 0;

    int* ptr = nullptr;

    complex(){
        real = 0;
        imag = 0;

        //initialize memory
        ptr = new int;
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

        if(real == other.real && imag == other.imag){
            return true;
        }

        return false;
    }

    ~complex(){
        cout<<"Destructor called"<<endl;

        //memory leakage
        delete ptr;
    }
};
class real{
    public:
    int r = 0;

    real(int r){
        this->r = r;
    }
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
   
   return 0;
}