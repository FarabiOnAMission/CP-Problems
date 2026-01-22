#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  ll s=0;
  map<ll,ll>freq;
  for(ll i=0;i<n;i++){
    cin>>v[i];
    freq[v[i]]++;
    s+=v[i];
  }
  vector<ll>ans;
  for(ll i=0;i<n;i++){
    ll x=(s-v[i]);
    if(x%2!=0) continue;
    x/=2;
    if(freq.count(x)){
      if(x==v[i]){
        if(freq[x]>1){
          ans.push_back(i+1);
        }
      }
      else{
        if(freq[x]>0){
          ans.push_back(i+1);
        }
      }
    }
  }

  cout<<ans.size()<<endl;
  for(auto x:ans) cout<<x<<' ';
}