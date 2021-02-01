#include<iostream>
using namespace std;
int main(){
    cout<<"Hello"<<endl;

    int a = 1, b = 1;
    cout<<"a:"<<a--<<"b:"<<--b<<"a:"<<a<<endl;


    int c = 10, d = 3;
    cout<<c%d<<endl; // 10/3 = 3 + (1/3)

    if(c != d){
        cout<<"not equals"<<endl;
    }else{
        cout<<"equal"<<endl;
    }

    bool x = 1, y = 0;
    cout<<(x||y)<<endl;

    int z = 5;
    int *ptr = &z;
    cout<<&z<<endl<<ptr<<endl<<*ptr<<endl;

    return 0;

    /*a  b  res(^)
    0  0   0
    0  1   1
    1  0   1
    1  1   0*/

    /*
    a  res(!)
    0   1
    1   0
    */

   /*
   btn1 = 0
   btn2 = 0

   if(btn1 == 1 && btn2 == 1)

   if((btn1&&btn2) == 1){
       cout<<":both clicked"
   }
   */

  /*
  languages = 
  1. LLL (0,1) (objectiveC)
  2. HLL (alpha-numeric char) (c/c++)

  compilers and interpreters
  -> {.....1000...} ex: gcc, g++
  -> {123456......} ex: java

  operators
         
  a -> 1101
  b -> 0001
  ----------

  1 + 1 = 10
  0 + 1 = 01
  0 + 0 = 00
  1 + 0 = 01
  1 + 1 + 1 = 11


  -> bitwise ->  one's compliment, 2's compliment

  a -> 1010   b -> 1111
  ~a -> 0101  ~b -> 0000

  2's compliment = 1's compliment + 1
     
   0101
   0001
   ------
    0110

    left shift

    a -> 1100    b -> 1010   c -> 0010
    (a<<1) 1000  (b<<1) ->   (c<<1) -> 0100
    (a>>1) 0110  (b>>1) ->


    int c = a + b

    c = c * a  -> c *= a

    c<<=1  -> c = c<<


   BODMAS -> () / * + -

   (a+b*10) = a 

    a = 10, b = 5
   (a++b-10)


   data types (void, char, float , int, double, long double)
-> int a = 5
-> float b = 3.5
-> float b = 5.0 + 1.1 = 6.1
-> double z = 1.999999999
-> char c = 'a'
-> void
-> bool a = 0/1 false/true


array<integer> -> [1,2,3,4,5,6,7]
array<float> -> [1.1,2.1,2.7] 

int a1,a2,a3,a4,a5,a6.....
int a[10] = {1,2,3,4,5,6,....}

char d[100]/string d = "akjdnejnfe cjfiejk" / 'a'x -> "a" ""

1 byte = 8 bits
char = 1 byte
int = 4 bytes
bool = 1 bytes
float = 4/8 bytes


ASCII values
'A' -> 65
'a' -> 97

size of data types


int addition(int a, int b){
    int c = a + b
    return c;
}

//reference -> int a = 5  //0xxhshfn2334
int *b = &a


{
    c drive //c/ada/adad/ad
    d drive 

}

*/

}