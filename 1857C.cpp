#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll c=(n*(n-1))/2;
    vector<ll>v(c);
    for(ll i=0;i<c;i++) cin>>v[i];

    sort(v.begin(),v.end());

    vector<ll>ans;
    ll idx =0;
    for(ll i=n-1;i>0;i--){
      ans.push_back(v[idx]);
      idx+=i;
    }

    ans.push_back(1000000000);
    for(ll i=0;i<n;i++) cout<<ans[i]<<' ';

    cout<<endl;

  }
}