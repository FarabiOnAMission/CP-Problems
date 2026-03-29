#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x,y;
    cin>>x>>y;
    vector<ll>ans;
    for(ll i=1;i<=x;i++) ans.push_back(1);
    for(ll i=1;i<=y;i++) ans.push_back(-1);

    ll sum=abs(x-y);
    ll k=max(x,y);
    ll c=0;
    for(ll i=1;i<=k;i++){
      if(sum%i==0) c++;
    }
    if(sum==0) cout<<1<<endl;
    else cout<<c<<endl;
    for(auto it:ans) cout<<it<<' ';

    cout<<endl;
  }
}