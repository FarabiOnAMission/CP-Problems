#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>q(n),r(n);
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      q[i]=x+1;
    }
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      r[i]=x+1;
    }

    sort(q.begin(),q.end());
    sort(r.begin(),r.end());

    ll lo=0,hi=n;
    ll ans=0;
    while(lo<=hi){
      ll m=lo+(hi-lo)/2;
      bool f=true;
      for(ll i=0;i<m;i++){
        ll x=q[i],y=r[m-i-1];
        if(x>(k+1)/y){
          f=false;
          break;
        }
      }
      if(!f){
          hi=m-1;
        }
        else{
          lo=m+1;
          ans=m;
        }
    }

    cout<<ans<<endl;

    }


}