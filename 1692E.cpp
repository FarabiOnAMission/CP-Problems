#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);
    vector<ll>prefcnt(n+1,0);
    vector<ll>suffcnt(n+1,0);
    ll cnt1=0;
    ll minleft=LLONG_MAX,minright=LLONG_MAX;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      if(v[i]==1) cnt1++;
    }

    if(cnt1<s){
      cout<<-1<<endl;
      continue;
    }
    if(cnt1==s){
      cout<<0<<endl;
      continue;
    }
    ll target=cnt1-s;
    for(ll i=1;i<=n;i++){
      prefcnt[i]=prefcnt[i-1];
      if(v[i-1]==1) prefcnt[i]++;

      if(prefcnt[i]==target){
        minleft=min(minleft,i);
      }
    }

    for(ll i = n-1; i >= 0; i--){
    suffcnt[i] = suffcnt[i+1];
    if(v[i]==1) suffcnt[i]++;

    if(suffcnt[i]==target){
        minright=min(minright,n-i);
      }
    }
    vector<ll> idx(n+1, -1); 
    for(ll i = n; i >= 0; --i){
      ll val = suffcnt[i];
      if(idx[val]==-1) idx[val] = i;
    }

    ll minboth = LLONG_MAX;
    for(ll left = 0; left <= n; ++left){
      ll need=target-prefcnt[left];
      if(need<0 || need>n) continue;
      if(idx[need]!=-1){
        ll rightRemoved=n-idx[need];
        ll totalRemoved=left+rightRemoved;
        minboth = min(minboth, totalRemoved);
      }
    }

    ll ans = LLONG_MAX;
    if(minleft!=LLONG_MAX)  ans=min(ans, minleft);
    if(minright!=LLONG_MAX) ans=min(ans, minright);
    if(minboth!=LLONG_MAX)  ans=min(ans, minboth);

    if(ans == LLONG_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
  }
}