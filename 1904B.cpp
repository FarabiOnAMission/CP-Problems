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
    vector<ll>prefsum(n+1,0);
    unordered_map<ll,vector<ll>>ump;
    for(ll i=0;i<n;i++)cin>>v[i];

    vector<ll>srt=v;
    sort(srt.begin(),srt.end());
    for(ll i=0;i<n;i++){
      ump[srt[i]].push_back(i);
    }
    for(ll i=1;i<=n;i++){
      prefsum[i]=prefsum[i-1]+srt[i-1];
    }

    vector<ll>reach(n);
    for(ll i=n-1;i>=0;i--){
      if(i==n-1){
        reach[i]=i;
      }
      else{
        if(prefsum[i+1]>=srt[i+1])
          reach[i]=reach[i+1];
        else
          reach[i]=i;
      }
    }

    unordered_map<ll, ll> used;
    for(ll i=0;i<n;i++){
      ll pos=ump[v[i]][used[v[i]]++];
      cout<<reach[pos]<<' ';
    }

    cout<<endl;
  }
}