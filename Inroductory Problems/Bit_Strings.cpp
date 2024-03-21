#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
    ll n;
    cin>>n;
    ll mod = 1e9+7;
    ll res=1;
    while(n--){
        res<<=1;
        res%=mod;
    }
    cout<< res%mod;
}

int main() {
    optimize();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}