#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>ans(2*n+1);
    ans[1]=n;
    ans[n+1]=n;
    for(ll i=2;i<=n;i++){
      ll x=(n-i)+1;
      ans[i]=x;
      ans[i+2*x]=x;
    }

    for(ll i=1;i<=2*n;i++)
      cout<<ans[i]<<' ';

    cout<<endl;
  }
}