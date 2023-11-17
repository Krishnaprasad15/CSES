#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int mod=1e9+7;
 int n;
 cin>>n;
 vector<int> dp(n+1);
 dp[0]=1;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=6;j++){
        if(j<=i) dp[i]= (dp[i]%mod + dp[i-j]%mod)%mod;
    }
 }
 cout<<dp[n]%mod;
 return 0;
}