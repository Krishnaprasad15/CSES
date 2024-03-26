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
    vector<int> a(26,0);
    for(ll i=0;i<s.size();i++){
        a[s[i]-'A']++;
    }
    int odd=-1;
    for(int i=0;i<26;i++){
        if(a[i]%2==1){
            if(odd==-1){
                odd=i;
            }else{
                cout<<"NO SOLUTION";
                return;
            }
        }
    }
    if(odd==-1 && s.size()%2==1){
        cout<<"NO SOLUTION";
        return;
    }
    if(odd!=-1 && s.size()%2==0){
        cout<<"NO SOLUTION";
        return;
    }
    string res="";
    for(int i=0;i<26;i++){
        for(int j=0;j<a[i]/2;j++){
            res.push_back((char)('A'+i));
        }
    }
    cout<<res;
    if(odd!=-1) res.push_back((char)('A'+odd));
    reverse(all(res));
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