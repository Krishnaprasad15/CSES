#include <bits/stdc++.h> 
using namespace std;
bool comp(const pair<int,int>&i,const pair<int,int>&j){
    return i.second<j.second;
}
int main() {
 int n;
 cin>>n;
 vector<pair<int,int>> a;
 while(n--){
    int x,y;
    cin>>x >>y;
    a.push_back(make_pair(x,y));
 }
 sort(a.begin(),a.end(),comp);
//  for(auto it:a){
//     cout<<it.first<<" "<<it.second<<endl;
//  }
 int cnt=0,mn=0;
 for(auto it:a){
    if(it.first>=mn){
        mn=it.second;
        cnt++;
    }
 }
 cout<<cnt;
 return 0;
}

// 3
// 3 5
// 4 9
// 5 8