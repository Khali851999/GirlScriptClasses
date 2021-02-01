#include<iostream>
// #include<bits/stdc++.h>
using namespace std;
int main(){
    //for loop

    //for ( init; condition; increment ) {
   //statement(s);
//}

    //entry controlled
    /*for(int i = 0; i <= 10; i++){    
        cout<<i<<endl;
    }

    //while loop //entry controlled
    int i = 0;
    while(i <= 10){
        cout<<i<<endl;
        i++;
    }
    
    //do while //exit controlled
    i = 0;
    do{
        cout<<i<<endl;
        i++;
    }while(i <= 10);*/


    // for(int i=0;i<10;i++){
    //     for(int j=0;j<10;j++){
    //         cout<<i<<" "<<j<<endl;
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<10;i++){
    //     cout<<i<<endl;
    //     if(i==5){
    //         break;
    //     }
    // }
    

    // for(int i=0;i<10;i++){
    //     if(i==5){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

    // int a[3];
    // // {int a0,a1,a2}
    // // a[0],a[1],a[2]
    // for(int i=0;i<3;i++){
    //     cin>>a[i];
    // }

    // int ans = 0;
    // for(int i=0;i<3;i++){
    //     ans = ans + a[i];
    // }

    // cout<<ans<<endl;

    // int n = 11;
    // if(n%2 == 0){
    //     cout<<"even"<<endl;
    // }else if(n%2 == 1){
    //     cout<<"odd"<<endl;
    // }else{
    //     cout<<"nothing"<<endl;
    // }

    // int n = 30;
    // if(n%2==0){
    //     cout<<"div 2"<<endl;
    // }
    // if(n%3==0){
    //     cout<<"div 3"<<endl;
    // }
    // if(n%5==0){
    //     cout<<"div 5"<<endl;
    // }

    // int n = 30;
    // if(n%10==0){
    //     if(n==10){
    //         cout<<"no is 10"<<endl;
    //     }
    //     if(n%10!=0){

    //     }else if(n){

    //     }else{

    //     }
    // }else{
    //     cout<<"not div by 10"<<endl;
    // }


    // int n = 11;
    // if(n%2 == 0){
    //     cout<<"even"<<endl;
    // }else if(n%2 == 1){
    //     cout<<"odd"<<endl;
    // }else{
    //     cout<<"nothing"<<endl;
    // }

    // int n = 11;
    // switch (n%2)
    // {
    // case 0: cout<<"even"<<endl;
    // //
    //     break;
    // case 1: cout<<"odd"<<endl;
    //         n++;
    //         //
    //     break;
    // default: cout<<"nothing"<<endl;
    // //
    //     break;
    // }

    // string s = "abc";
    // switch (s == "abc")
    // {
    // case 1: cout<<"abc found"<<endl;
    //     break;
    // case 0:
    //     break;
    // default: cout<<"abc not found"<<endl;
    //     break;
    // }

    //1. multiply 5 numbers 
    //2. addition 10 numbers


    // int a[5] = {1,2,7,4,5};
    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<endl;
    // }

    // int b[5][5];
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cin>>a[i][j];
    //     }
    // }

    string s = "abdfjenjabc";
    // cout<<s[2]<<endl;
    string t = "hdhchabc";
    //concat 
    cout<<s+t<<endl;
    //length
    int lengthofs = s.size();
    //strcpy
    s = t;
    //strcmp
    if(s==t){

    }
    //find
    if(s.find("abc") != string::npos){
        cout<<"abc found"<<endl;
        cout<<s.find("abc")<<endl;
    }else{
        cout<<"c not found"<<endl;
    }
}