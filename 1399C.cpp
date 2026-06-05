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
    vector<ll>freq(n+1,0);
    for(ll i=0;i<n;i++){
      cin>>v[i];
      freq[v[i]]++;
    }
    ll ans=-1;
    for(ll i=2;i<=2*n;i++){
      ll c=0;
      for(ll w=1;w<=i/2;w++){
        if(w==i-w){
          c+=(freq[w])/2;
        }
        else{
          if(i-w<=n)
              c+=min(freq[w],freq[i-w]);
        }
      }

      ans=max(c,ans);
    }

    cout<<ans<<endl;
  }
}