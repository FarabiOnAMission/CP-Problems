#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
  ll t;
  cin>>t;
  while(t--){
    ll a,b;
    cin>>a>>b;
    ll ans=LLONG_MAX;
    for(ll k=0;k<=50;k++){
      if(b+k==1)
        continue;
      
      ll step=0;
      ll tmp=a;
      while(tmp>0){
        tmp/=(b+k);
        step++;
      }

      ans=min(ans,step+k);
    }

    cout<<ans<<endl;
  }
}