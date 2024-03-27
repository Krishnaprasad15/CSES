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

void get(int src,int des,int aux,int n){
    if(n==1){
        cout<<src<<" "<<des<<nl;
        return;
    }
    get(src,aux,des,n-1);
    cout<<src<<" "<<des<<nl;
    get(aux,des,src,n-1);
}
void solve(){
    int n;
    cin>>n;
    cout<<(1<<n) -1 <<nl;
    get(1,3,2,n);
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