#include<bits/stdc++.h>

using namespace std;
using ll=long long;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    vector<ll>p(n),d(n);
    ll mx0=-1,mx1=LLONG_MAX;
    for(ll i=0;i<n;i++){
      cin>>p[i];
      if(s[i]=='0'){
        d[i]=-1;
        mx0=max(mx0,p[i]);
      }
      else{
        d[i]=1;
        mx1=max(mx1,p[i]);
      }
    }
    ll base = accumulate(d.begin(),d.end(),0LL);
    ll diff = x-y;
    if(diff>base){
      
    }
  }
}