#include<bits/stdc++.h>

using namespace std;
using ll=long long;

struct Cow {
    ll s, t, b;
};

int main(){
  freopen("blist.in", "r", stdin);
  freopen("blist.out", "w", stdout);
  ll n;
  cin>>n;
  vector<Cow>cows(n);
  for(ll i=0;i<n;i++){
    cin>>cows[i].s>>cows[i].t>>cows[i].b;
  }

  sort(cows.begin(), cows.end(), [](const Cow &a, const Cow &b) {
    return a.s < b.s;
});

  vector<ll>labels(1e4,0);
  ll curr=0,ans=-1;
  for(ll i=0;i<n;i++){
    labels[cows[i].t]+=cows[i].b;
    curr+=cows[i].b;
    for(ll j=1;j<cows[i].s;j++){
      curr-=labels[j];
      labels[j]=0;
    }

    ans=max(ans,curr);
  }

  cout<<ans<<endl;
}