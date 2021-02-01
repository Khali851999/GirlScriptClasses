#include<iostream>
using namespace std;
class Par{

    public: 
    int haircolor;
    int height;

    void print(){
        cout<<haircolor<<endl;
    }

    Par(){
        cout<<"Par"<<endl;
    }

    ~Par(){
        cout<<"~Par"<<endl;
    }

    //cannot be inherited
    private:
    int priv;

    //same as private but can be inherited
    protected:
    int prot;
};

class Child : public Par{

    /*public: 
    int haircolor;
    int height;

    //same as private but can be inherited
    protected:
    int prot;*/

    public:
    Child(){
        cout<<"Ch"<<endl;
    }
    ~Child(){
        cout<<"~Ch"<<endl;
    }

};

class grandchild : public Par{

};

int main(){

    //OOPS
    /*
    1. Inheritance: characterstics of a class to inherit properties from another class
    - Single Level
    - MultiLevel
    - Multiple
    - Hierarchical
    - Hybrid https://www.geeksforgeeks.org/inheritance-in-c/
    2. Abstraction https://www.tutorialspoint.com/cplusplus/cpp_data_abstraction.htm
    3. Encapsulation 
    4. Data Hiding
    5. Polyphormism
    
    */

   Child c;
   c.haircolor = 0;


   int a ,b;
   cin>>a>>b;

   try{
       if(b==0)
        throw "Div not posible";
       int c = a/b;
       cout<<c<<endl;
   }catch(exception e){
       cout<<"exception occurred:"<<endl;
   }
   

   if(b == 0){
       cout<<"exception"<<endl;
   }
   else{
       int c = b/a;
       cout<<c<<endl;
    }

    return 0;
}