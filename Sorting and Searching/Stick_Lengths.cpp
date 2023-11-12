#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int main() {
 int n;
 cin>>n;
 vector<int>a(n);
 for(auto &it:a) cin>>it;
 sort(a.begin(),a.end());
 ll target= a[n/2];
 ll cost=0;
 for(auto it:a){
    cost+=abs(it-target);
 }
 cout<<cost;
 return 0;
}

// 5
// 2 3 1 5 2