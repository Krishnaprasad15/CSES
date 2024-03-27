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

vector<string> get(int n){
    vector<string> res;
    if(n==1){
        res.push_back("0");
        res.push_back("1");
        return res;
    }
    vector<string> prev= get(n-1);

    for(int i=0;i<prev.size();i++){
        string r;
        r+='0';
        r+=prev[i];
        res.push_back(r);
    }
    for(int i=prev.size()-1;i>=0;i--){
        string r;
        r+='1';
        r+=prev[i];
        res.push_back(r);
    }
    return res;
}
void solve(){
    int n;
    cin>>n;
    vector<string> res= get(n);
    for(auto it:res) cout<<it<<nl;
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