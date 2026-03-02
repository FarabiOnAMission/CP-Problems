#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,a,b;
  string s;
  cin>>n>>a>>b>>s;
  vector<ll>prefa(n+1,0),prefb(n+1,0);
  for(ll i=0;i<n;i++){
    prefa[i+1] = prefa[i] + (s[i]=='a' ? 1 : 0);
    prefb[i+1] = prefb[i] + (s[i]=='b' ? 1 : 0);
  }
  ll c=0;
  for(ll l=0;l<n;l++){
    ll ita = lower_bound(prefa.begin(),prefa.end(),a+prefa[l])-prefa.begin();
    ll itb = lower_bound(prefb.begin(),prefb.end(),b+prefb[l])-prefb.begin()-1;
    if(ita<=itb && ita<=n)
          c+=(itb-ita+1);
  }

  cout<<c<<endl;
}