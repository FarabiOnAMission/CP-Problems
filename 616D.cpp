#include<bits/stdc++.h>

using namespace std;
using ll=long long;


int main(){
  ll n,k;
  cin>>n>>k;
  vector<ll>a(n);
  set<ll>s;
  //map<ll,ll>freq;
  vector<ll>freq(1000007,0);
  for(ll i=0;i<n;i++) cin>>a[i];
  ll ans=-1,r=-1;
  ll unique_cnt=0;
  pair<ll,ll>best;
  for(ll i=0;i<n;i++){
    while(r<n-1){
      freq[a[r+1]]++;
      if(freq[a[r+1]]==1){
        unique_cnt++;
      }
      if(unique_cnt>k){
        freq[a[r+1]]--;
        unique_cnt--;
        break;
      }
      else{
        r++;
      }
    }
    if(r-i+1>ans){
      ans=r-i+1;
      best.first=i+1;
      best.second=r+1;
    }
    freq[a[i]]--;
    if(freq[a[i]]<=0){
      unique_cnt--;
    }
  }

  cout<<best.first<<' '<<best.second<<endl;
}
