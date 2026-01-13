#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>x(n),y(n);
    for(ll i=0;i<n;i++)
      cin>>x[i]>>y[i];
    
      sort(x.begin(),x.end());
      sort(y.begin(),y.end());
      if(n%2==1){
        cout<<1<<endl;
      }
      else{
        ll c1=x[n/2] - x[n/2 - 1]+1;
        ll c2=y[n/2] - y[n/2 - 1]+1;

        ll ans=c1*c2;
        cout<<ans<<endl;
      }
  }
}