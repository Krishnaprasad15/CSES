#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;
int main() {
    ll n,m;
    cin>>n >>m;
    vector<ll> a(n),b(m);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    multiset<int,greater<int>> s;
    for(auto it:a) s.insert(it);
    for(int i=0;i<m;i++){
        auto it= s.lower_bound(b[i]);
        if(it==s.end()) cout<<-1<<"\n";
        else {
            cout<<*it<<"\n";
            s.erase(it);
        }
    }
    return 0;
}


// 5 3
// 5 3 7 8 5
// 4 8 3