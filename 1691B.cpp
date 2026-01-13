#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n+1,0);
    map<ll,ll>mp;
    map<ll,ll>idx;
    for(ll i=0;i<n;i++){ 
      cin>>v[i];
      mp[v[i]]++;
    }
    
    ll f=true;
    for(ll i=0;i<n;i++){
      if(mp[v[i]]<=1){
        f=false;
        break;
      }
    }
    vector<ll>ans(n);
    if(!f){
        cout<<-1<<endl;
    }
    else{
      for(ll i=0;i<n;i++){
        if(v[i]==v[i+1]){
          ans[i]=(i+2);
        }
        else{
          ans[i]=(i+1)-mp[v[i]]+1;
        }
      }

      for(ll i=0;i<n;i++)
        cout<<ans[i]<<' ';

      cout<<endl;
    }
      
  }
}