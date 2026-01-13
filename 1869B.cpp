#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<ll>x(n);
    vector<ll>y(n);
    for(ll i=0;i<n;i++){
      cin>>x[i]>>y[i];
    }
    if(a<=k && b<=k){
      cout<<0<<endl;
      continue;
    }
    ll homex=x[a-1];
    ll homey=y[a-1];
    ll targetx=x[b-1];
    ll targety=y[b-1];
    ll mina=LLONG_MAX;
    ll minb=LLONG_MAX;
    ll d1 =abs(homex-targetx)+abs(homey-targety);

    if(k==0){
        cout<<d1<<endl;
        continue;
      }
    for(ll i=0;i<k;i++){ 
      ll d=abs(x[i]-homex)+abs(y[i]-homey);
      mina=min(mina,d);
    }

    for(ll i=0;i<k;i++){  
      ll d=abs(x[i]-targetx)+abs(y[i]-targety);
      minb=min(minb,d);
    }
    
    if(a>k && b<=k)
    {
      cout<<min(mina,d1)<<endl;
    }
    else if(a<=k && b>k){
      cout<<min(minb,d1)<<endl;
    }
    else{
      cout<<min(mina+minb,d1)<<endl;
  }
}
}