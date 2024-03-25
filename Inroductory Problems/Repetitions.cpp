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
    string s;
    cin>>s;
    vector<int> a(s.size(),0);
    int mx=1;
    a[0]=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            a[i]=a[i-1]+1;
        }else a[i]=1;
        mx=max(a[i],mx);
    }
    cout<<mx;
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