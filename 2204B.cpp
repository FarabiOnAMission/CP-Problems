#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<pair<ll,ll>>trck;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      trck.push_back({v[i],i+1});
    }

    sort(trck.rbegin(),trck.rend());
    ll curr=n,c=0;
    for(ll i=0;i<trck.size();i++){
      ll x=trck[i].second;
      if(x<=curr){
        c++;
        curr=x;
      }

      if(x==1){
        break;
      }
    }

    cout<<c<<endl;
  }
}