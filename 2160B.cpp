#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    vector<ll>ans(n+1);
    for(ll i=1;i<=n;i++){
      cin>>v[i];
    }

    ll curr=1;
    for(ll i=1;i<=n;i++){
      ll diff=v[i]-v[i-1];
      if(diff==i){
        ans[i]=curr;
        curr++;
      }
      else ans[i]=ans[i-diff];
    }

    for(ll i=1;i<=n;i++) cout<<ans[i]<<' ';
    cout<<endl;
  }
}