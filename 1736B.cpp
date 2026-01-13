#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n+2);
    a[0]=a[n+1]=1;
    for(ll i=1;i<=n;i++) cin>>a[i];

    vector<ll>b(n+1);
    for(ll i=0;i<=n;i++){
      b[i]=lcm(a[i],a[i+1]);
    }

    bool flag=true;
    for(ll i=0;i<n;i++){
      ll g=gcd(b[i],b[i+1]);
      if(g!=a[i+1]){
        flag=false;
        break;
      }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}