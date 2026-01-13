#include<bits/stdc++.h>

using namespace std;
using ll=long long;
using pll=pair<ll,ll>;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n),next(n),prev(n);
    priority_queue<pll,vector<pll>,greater<pll>>pq;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      pq.push({v[i],i});
      next[i]=i+1;
      prev[i]=i-1;
    }
    next[n-1]=0;
    prev[0]=n-1;

    ll merges=0;
    ll ans=0;
    while(merges<n-1){
      ll x=pq.top().first;
      ll y=pq.top().second;
      pq.pop();
      ll nxti=next[y],previ=prev[y],nxtrial=v[nxti],prevrial=v[previ];
      if(nxtrial<prevrial){
        ans+=v[nxti];
      }
      else{
        ans+=v[previ];
      }

      next[previ]=nxti;
      prev[nxti]=previ;
      merges++;
    }

    cout<<ans<<endl;
  }
}