#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 vector<int> a(n);
 map<int,int> mp;
 for(auto &it:a){
    cin>>it;
 }
//  for(auto it:a) mp[it]++;
 int mx=INT_MIN,cnt=0,i=0,j=0;
 while(j<n){

    if(mp.find(a[j])==mp.end() || mp[a[j]]==0){
        mp[a[j]]++;
        cnt++;
        mx=max(mx,cnt);
        j++;
    }else{
        cnt--;
        mp[a[i]]--;
        i++;
    }
 }
 cout<<mx;
 return 0;
}

// 8
// 1 2 1 3 2 7 4 2
