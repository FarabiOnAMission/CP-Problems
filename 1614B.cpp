#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<pair<ll,ll>>cp(n);
    for(ll i=0;i<n;i++){ 
      cin>>a[i];
      cp[i]={a[i],i};

    }
    sort(cp.begin(),cp.end(),greater<pair<ll,ll>>());
    vector<ll>ans(n);
    ll time=0;
    ll track=0;
    for(ll i=0;i<n;i++){
      if(i%2==0) track++;
      ll x=cp[i].second;
      if(i%2==0){
        ans[x]=track;
      }
      else{
        ans[x]=-track;
      }
      time+=2*cp[i].first*abs(track);
    }

    cout<<time<<endl;
    cout<<0<<' ';
    for(ll i=0;i<n;i++)
      cout<<ans[i]<<' ';
    
      cout<<endl;
  }
}