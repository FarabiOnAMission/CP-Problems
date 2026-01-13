#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    ll sum=0;
    ll mx=0;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      mx=max(mx,v[i]);
    }

    ll lo=0,hi=mx+x;
    ll ans=0;
    while(lo<=hi){
      ll need=0;
      ll mid=lo+(hi-lo)/2;
      for(ll i=0;i<n;i++) need+=max(0LL,mid-v[i]);
      if(need>x)
        hi=mid-1;
      else{
        ans=mid;
        lo=mid+1; 
    }
  }

    cout<<ans<<endl;
    }
  }
