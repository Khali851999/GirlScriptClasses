#include<iostream>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){

/*
    double a = 10, b = 5, c = -8;

    //10^5
    cout<<pow(a,b)<<endl;

    cout<<sqrt(a)<<endl;

    cout<<abs(c)<<endl;

    //greatest integer
    cout<<floor(1.6)<<endl;

    cout<<ceil(1.6)<<endl;

    //base e
    cout<<log(a)<<endl;

    //base 2
    cout<<log2(a)<<endl;

    //log a (b)
    cout<<log(b)/log(a)<<endl;

    //random value btw 1...10
    //rand() -> 0.....2^31-1
    for(int i=0;i<5;i++)
        cout<<rand()%10 + 1<<endl;

    //random number btw [a,b]
    // rand()%b + a

    // int a[10];


*/
    //STL -> Standard Template Library (C++)
    //vector -> array with dynamic size
    //unordered_map -> hashmap {orange -> 1, yellow -> 2}
    //queue, stacks...


    /*
    1. vector

    vector<int> a;
    {1,2,3,4,5,6,7}
     0 1 2 3 4 5 6 
    a.push_back(1); //adding element
    a.push_back(2); 
    a.pop_back();
    
    cout<<a[3];

    int size = a.size();
    for(int i = 0; i < size; i++){
        cout<<a[i]<<endl;
    }

    a.resize(100);
    if(a.empty()){
        cout<<empty<<endl;
    }
    
    vector<int>::iterator it = a.begin();
    

    2. stack LIFO

    stack<int> st;
    {1,2,3,4}
    st.push(1); //add elements
    st.pop(); //removes 5
    st.top(); //return 4
    st.size();



    3.queue FIFO,FCFS
     1 2 3 4 5 6 7-----------

     queue<int> q;
     q.push(1); //add
     q.pop(); //remove the first element
     q.size(); //size



     unordered_map -> hashmap
     'a' -> 1
     'b' -> 2
     'c' -> 3

     unordered_map<char,int> umap;
     1-> umap.insert(make_pair('a',1)); //add
     2-> umap.insert({'a',1});
     3-> umap['a'] = 1;

     umap.erase('b); //delete

     //search
     if(umap.find('b') != umap.end()){
         cout<<"element is present and value is"<< umap['b'] <<endl;
     }else{
         cout<<"element is absent"<<endl;
     }



     Algorithms

     1. sorting

     vector<int> a = {1,3,5,7,6,4,3}

     sort(a.begin(),a.end());
    */


     
     int n;
     cin>>n;
    // vector<int> v(n);
    // int v[n];

    vector<int> v;
     for(int i=0;i<n;i++){
         int temp;
         cin>>temp;
         v.push_back(temp);
     }

     //1. inc
     // sort a vector v
     //sort(v.begin(),v.end());

     //sort an array v of size n
     //sort(v,v+n);

     //2. decr
     //sort a vector v
     //sort(v.begin(),v.end(),greater<int>()); -> comparator

     //sort an array
     //sort(v,v+n,greater<int>());

     for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

    for(auto i=0;i<n;i++)
        cout<<v[i]<<endl;

}