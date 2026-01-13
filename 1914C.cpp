#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    vector<ll>b(n);
    vector<ll>prfmax(n+1,0);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++){
      cin>>b[i];
      prfmax[i+1]=max(prfmax[i],b[i]);
    }
    ll ans=0;
    ll suma=0;
    ll sumb=0;
    for(ll i=0;i<n;i++){
      suma+=a[i];
      sumb=prfmax[i+1]*(k-1);
      ans=max(ans,suma+sumb);
      k--;
      if(k==0)
        break;
    }

    cout<<ans<<endl;
  }
}