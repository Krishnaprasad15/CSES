#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main() {
 ll n;
 cin>>n;
 vector<ll> a(n);
 for(auto &it:a) cin>>it;
 ll mx=INT_MIN,res=0;
 for(ll i=0;i<n;i++){
    res+=a[i];
    // cout<<res<<endl;
    mx=max(mx,res);
    if(res<0) res=0;
    
 }
 cout<<mx;
 return 0;
}
// 8
// -1 3 -2 5 3 -5 2 2