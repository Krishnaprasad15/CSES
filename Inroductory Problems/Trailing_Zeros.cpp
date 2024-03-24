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
    ll res=0;
    while(n>=5){
        res+=(n/5);
        n/=5;
    }
    cout<<res;
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