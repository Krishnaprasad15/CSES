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
    ll sum = (n*(n+1))/2;
    if(sum%2==1) cout<<"NO";
    else{
        YES;
        set<ll> s1,s2;
        ll target= sum/2,t= n;
        for(ll i=1;i<=n;i++) s1.insert(i);
        while(s1.count(target)==0){
            target-=t;
            s2.insert(t);
            s1.erase(t);
            t--; 
        }
        s2.insert(target);
        s1.erase(target);
        cout<<s1.size()<<nl;
        for(auto it:s1) cout<<it<<" ";
        cout<<nl;
        cout<<s2.size()<<nl;
        for(auto it:s2) cout<<it<<" ";
    }
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