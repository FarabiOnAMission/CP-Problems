#include<bits/stdc++.h>


using namespace std;
using ll=long long;


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>p(n+1);

    for(ll i=0;i<=n;i++)
      p[i]=i;
    
    p[r]=p[l-1];
    for(ll i=1;i<=n;i++){
      cout<<(p[i]^p[i-1])<<' ';
    }
    cout<<endl;
  }
}