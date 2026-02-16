#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    bool f=false;
    for(ll i=1;i<=n;i++){
      if(i%2!=0){
        multiset<ll>current_val;
        multiset<ll>require;
        for(ll j=i;j<=n;j*=2){
          current_val.insert(v[j]);
          require.insert(j);
        }

        if(current_val!=require){
          cout<<"NO"<<endl;
          f=true;
          break;
        }
      }
      if(f) break;
    }
    if(!f) cout<<"YES"<<endl;
  }
}