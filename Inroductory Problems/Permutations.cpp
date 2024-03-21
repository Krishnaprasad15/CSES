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
    vector<ll> a(n+1);
    a[0]=0;
    if(n==1){
        cout<<1;
        return;
    }
    if(n==4) {cout<<"2 4 1 3"; return;}
    if(n==2 || n==3) {
        cout<<"NO SOLUTION";
        return;
    }
    ll j=1,k=n/2 +1;

    for(int i=n;i>=1;i--){
        if(!(i&1)) a[j++]= i;
        else a[k++]=i;
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
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