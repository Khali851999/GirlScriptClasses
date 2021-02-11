#include <iostream>
#include<vector>
#define lli long long int
#define ulli unsigned long long int
#define ld long double
#define mod 1000000007
#define vi vector<lli>
#define precision(x,y)         fixed<<setprecision(y)<<x
#define sort(a) sort(a.begin(),a.end())
//first idx >= val
#define lb(a,x) lower_bound(a.begin(),a.end(),x)-a.begin()
//first idx > val
#define ub(a,x) upper_bound(a.begin(),a.end(),x)-a.begin()
using namespace std;
int l_b(vector<int>& a, int l, int r, int x){
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]>=x)
            ans = mid, r = mid - 1;
        else
            l = mid + 1;
    }
    return ans;
}
int u_b(vector<int>& a, int l, int r, int x){
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]>x)
            r = mid - 1;
        else{
            ans = mid;
            l = mid + 1;
        }
    }
    return ans;
}

void solve(){
    lli n;
    cin>>n;
    if(n==1){
        cout<<"! 1"<<endl;
        return;
    }
    lli l = 0, r = n-1;
    lli ans = 1;
    while(l<=r){
        lli mid = (l+r)/2;
        lli left,md,right;
        cout<<"? "<<mid+1<<endl;
        cin>>md;
        if(mid-1>=0){
            cout<<"? "<<mid<<endl;
            cin>>left;
        }else{
            left = INT_MAX;
        }

        if(mid+1<n){
            cout<<"? "<<mid+2<<endl;
            cin>>right;
        }else{
            right = INT_MAX;
        }

        if(md<min(left,right)){
            cout<<"! "<<mid+1<<endl;
            return;
        }else if(md < left){
            ans = mid+1;
            l = mid+1;
        }else{
            ans = mid-1;
            r = mid-1;
        } 
    }
    
    cout<<"! "<<ans<<endl;
    
}
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    // int t = 1;
    // // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
}
