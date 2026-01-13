#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  for(ll k=1;k<=t;k++){
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];

    vector<ll>prefmax(n+1,0),suffmin(n+1,LLONG_MAX);
    for(ll i=1;i<=n;i++){
      prefmax[i]=max(prefmax[i-1],v[i]);
    }

    for(ll i=n-1;i>=0;i--){
      suffmin[i]=min(v[i+1],suffmin[i+1]);
    }
    
    bool flag=false;
    for(ll i=1;i<=n;i++){
      if(v[i]>prefmax[i-1] && v[i]<suffmin[i]){
        cout<<"Case "<<k<<": "<<i<<endl;
        flag=true;
        break;
      }
    }

    if(!flag){
      cout<<"Case "<<k<<": "<<"Humanity is doomed!"<<endl;
    }
  }
}