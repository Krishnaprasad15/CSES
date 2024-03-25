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

    multiset<ll> mst;
    for(auto it:a){
        if(mst.size()==0) mst.insert(it);
        else{
            auto base= mst.upper_bound(it);
            if(base==mst.end()) mst.insert(it);
            else{
                mst.insert(it);
                mst.erase(base);
            }
        }
    }
    cout<<mst.size();
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