#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main() {
 ll n;
 cin>>n;
 vector<ll>a(n);
 for(auto &it:a) cin>>it;
 sort(a.begin(),a.end());
 ll res=1;
 for(ll i=0;i<n;i++){
    if(a[i]<=res) res+=a[i];
    else break; 
 }
 cout<<res;
 return 0;
}

// 5
// 2 9 1 2 7


// 4 2 1 5 3
// 1 2 3 4 5