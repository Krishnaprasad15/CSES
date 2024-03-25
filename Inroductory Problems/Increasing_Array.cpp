#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
    ll n;
    cin>>n;
    vl a(n);
    for(auto &it:a) cin>>it;

    ll cnt=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            cnt+= (a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<cnt;
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