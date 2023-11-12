#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 vector<int> a(n),b(n);
 for(int i=0;i<n;i++){
    int arrival,leaving;
    cin>>arrival >>leaving;
    a[i]=arrival;
    b[i]=leaving;
 }
 sort(a.begin(),a.end());
 sort(b.begin(),b.end());

 int i=0,j=0,cnt=0,mx=0;
 while(i<n && j<n){
    if(a[i]<b[j]){
        ++cnt;
        i++;
    }else{
        --cnt;
        j++;
    }
    mx=max(mx,cnt);
 }
 cout<<mx;
 return 0;
}

// 4
// 1 10
// 2 4
// 3 5
// 7 9
