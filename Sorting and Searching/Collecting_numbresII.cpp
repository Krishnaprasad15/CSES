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
    long long n,m;
    cin>>n>>m;
    vl a(n+1);
    vl b(n+1);
    for(int i=1;i<=n;i++){
        cin>>b[i];
        a[b[i]]=i;
        // b[i]=x;
    }
    a[0]=0;
    b[0]=0;
    long long res=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]) res++;
    }
    set<pair<ll,ll>> st;
    long long x,y;
    while(m--){
        cin>>x>>y;
        // long long res=1;
        if(b[x]+1<=n) st.insert({b[x],b[x]+1});
        if(b[x]-1>=1) st.insert({b[x]-1,b[x]});
        if(b[y]+1<=n) st.insert({b[y],b[y]+1});
        if(b[y]-1>=1) st.insert({b[y]-1,b[y]});

        for(auto it:st){
            res-= (a[it.first]>a[it.second]);
        }

        swap(b[x],b[y]);
        a[b[x]]=x;
        a[b[y]]=y;
        for(auto it:st){
            res+= (a[it.first]>a[it.second]);
        }
        cout<<res<<nl;
        st.clear();
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