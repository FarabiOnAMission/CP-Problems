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
    for(ll i=1;i<=n;i++){
      cin>>v[i];
    }
    ll sum=0;
    ll ans=0;
    for(ll i=1;i<=n;i++){
      if(i%2==0)
      {
      sum+=v[i];
      }
      else{
        sum-=v[i];
      }
      if(i>=2 && sum<0){
        ans+=abs(sum);
        sum=0;
      }
    }

    cout<<ans<<endl;
  }
}