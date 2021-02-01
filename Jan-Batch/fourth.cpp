#include <iostream>
#include <cmath>
using namespace std;
//function is something that performs a task
int addNumbers(int first, int second){

    //body
    return first + second;
}
void swap(int x, int y = 20) {
   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   cout<<"x is "<<x<<" and y is "<<y<<endl;
   return;
}
void swap2(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

    return;
}
void swap3(int* x, int* y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}
int main(){
    int a = 3, b = 5;
    int power = pow(a,b);
    int c = addNumbers(a,b);

    swap(a, b);

/*
    //call by value
    swap(a, b);
    cout<<"a is "<<a<<" and b is "<<b<<endl;

    //call by reference
    swap2(a, b);
    cout<<"a is "<<a<<" and b is "<<b<<endl;


    // int* x = &a;
    // cout<<"memory location of a is :"<<x<<endl;
    // cout<<"value of a is :"<<*x<<endl;


    //call by pointer
    swap3(&a, &b);
    cout<<"a is "<<a<<" and b is "<<b<<endl;
    return 0;
*/

    // int *x = nullptr;
    // x = &a; //pointer
    int &x = a; //reference
    // a++;
    // cout<<a<<endl;
    // x++;
    cout<<a<<" "<<x<<endl;


    /*

   
Q1
int n = 5
*
* *
* * *
* * * *
* * * * *


Q2
n = 5
* * * * *
* * * *
* * *
* *
*

Q3
n = 3
    *   
  * * *
* * * * *


Q4
n = 5

A
B C
D E F
G H I J
K L M N O
P Q R S
T U V
W X 
Y


Q5
mat1 = 
[[1,2,3,4],
 [5,6,7,8],
 [9,10,11,12]]

mat2 = 
 [[1,2,3,4],
 [5,6,7,8],
 [9,10,11,12]]

 mat3 = mat1 + mat2
 print mat3



Q6
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5



Q7
           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 

    */
}