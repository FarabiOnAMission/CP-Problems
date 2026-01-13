#include<bits/stdc++.h>

using namespace std;
using ll=long long;


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,c;
    cin>>n>>c;
    ll s1=0;
    ll s2=0;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
      cin>>v[i];
      }
      ll lo=0,hi=1e9;
      ll ans=-1;
      while(lo<=hi){
        ll mid=lo+(hi-lo)/2;
        ll s=0;
        for(ll i=0;i<n;i++){
          s+=(v[i]+2*mid)*(v[i]+2*mid);
          if(s>c)
            break;
        }
        if(s<c) lo=mid+1;
        else if(s>c) hi=mid-1;
        else{
          ans=mid;
          break;
        }
      }

      cout<<ans<<endl;
  }
}