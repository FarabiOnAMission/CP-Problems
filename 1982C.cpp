#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll sum=0,cnt=0;
    ll left = 0;
    for(ll i=0;i<n;i++){
      sum+=a[i];
      if(sum>=l && sum<=r){
        cnt++;
        sum=0;
        left=i+1;
      }
      else if(sum>r){
        while(sum>r && left<=i){
          sum-=a[left];
          left++;
        }
        if(sum>=l && sum<=r){
          cnt++;
          sum=0;
          left=i+1;
        }
      }
    }

    cout<<cnt<<endl;
  }
}

/*

if(sum>r){
while(sum>r || l<=r){
sum-=a[l];
l++;
}
if(sum<=r && sum>=l){
cnt++; 
sum=0;
l=r;
}
}

*/