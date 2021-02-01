#include<iostream>
#include<vector>
using namespace std;
void q3(){
    int n;
    cin>>n;
    int m = 2*n-1;
    vector< vector<char> > a(n+1,vector<char> (m+1,' '));


    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            a[i][n-i+j] = '*';
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cout<<a[i][j];
        cout<<endl;
    }
}
void q7(){
    /*
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
    1 5 10 5 1
    

    a[i][j] = a[i-1][j-1]+a[i-1][j]
    */

   int n;
   cin>>n;

   int a[n][n];
   //initialize with -1,0
   cout<<sizeof(a)/sizeof(int)<<endl;
   memset(a,0,sizeof(a));
   a[0][0] = 1;
   for(int i=1;i<n;i++){
       for(int j=0;j<=i;j++){
           if(j==0){
               a[i][j] = 1;
           }else{
               a[i][j] = a[i-1][j-1]+a[i-1][j];
           }
       }
   }

   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(a[i][j] != 0)
                cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }
}
int main(){

    // q3();
    q7();
}