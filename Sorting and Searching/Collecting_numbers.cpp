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
    long long n;
    cin>>n;
    vl a(n+1);
    for(int i=1;i<=n;i++){
        long long x;
        cin>>x;
        a[x]=i;
    }
    long long res=1;
    a[0]=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]) res++;
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