#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>powgain;
    while(n--){
      ll k;
      cin>>k;
      ll c=0,power=0;
      for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        x-=c;
        power=max(x,power);
        c++;
      }
      powgain.push_back({power,k});
    }

    sort(powgain.begin(),powgain.end());
    ll l=0,r=2e9,ans=-1;
    while(l<=r){
      ll m=l+(r-l)/2;
      bool f=true;
      ll go=m;
      for(ll i=0;i<powgain.size();i++){
        if(go<=powgain[i].first){
          f=false;
          break;
        }
        else{
          go+=powgain[i].second;
        }
      }

      if(!f){
        l=m+1;
      }
      else{
        r=m-1;
        ans=m;
      }
    }
    cout<<ans<<endl;
  }
}