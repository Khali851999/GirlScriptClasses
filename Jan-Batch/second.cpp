#include <iostream>
using namespace std;

// main() is where program execution begins.
// ktkit
/*
krwivnr
fjnkrg

char  = 1 byte = 8 bits
range = -2^bits -> +2^bits-1
range = -2^8 -> 2^8-1 => 0 -> +127+128


int = 4 bytes = 32 bits
ranges =

*/
//global variable

/*
const int pi = 3.14
static int x = 2
x = 3
int r = 10;
int a = pi*r*r;
*/

void fun(){

   int u = 10, v = 100, z = 99;
   int x = (u--*v)+z;
   /*
   1. u = 10 -> (10*100)+99 = 1099
   2. u = 9
   */
   int a2 = (--u+z)*v;
   /*
   1. u = 9
   2. u = 8 (8+99)*100 = 10700
   */
   cout<<x<<endl<<a2;
}

void add_2_numbers(){
    int a,b;
    cout<<"Enter first no:";
    cin>>a;
    cout<<endl;
    cout<<"Enter second no:";
    cin>>b;
    cout<<endl;
    cout<<"Sum of the numberss is:"<<a+b<<endl;
}

int a = 100;
int main() {
   cout << "Hello \n"; // prints Hello World
   int abAc1239_;

   //local variable

   // data_type variable_name = initial_value ;
   //int a,b,c,d;
   //float e;
   cout<<123456<<endl;

   


   //name : akshat
   fun();
   cout<<endl;

   int num = 0;
   cout<<"Enter the number:";
   cin>>num;
   cout<<"You entered:"<<num<<endl;

   add_2_numbers();

   return 0;
}

int fun2(){
    cout<<a;
}