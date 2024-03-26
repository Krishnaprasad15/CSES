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
    long long  x,y;
    cin>>x>>y;

    if(x>y){
        if(x&1){
            cout<< (x-1)*(x-1) + 1 + (y-1);
        }else{
            cout<< (x*x) - (y-1);
        }
    }else{
        if(y&1){
            cout<< (y*y)-(x-1);
        }else{
            cout<< (y-1)*(y-1)+1 + (x-1);
        }
    }
    cout<<nl;
}

int main() {
    optimize();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}