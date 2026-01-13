#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>a1(n+1,0),a2(n+1,0),b(n+2,0);

  for(ll i=1;i<n;i++) cin>>a1[i];
  for(ll i=1;i<n;i++) cin>>a2[i];
  for(ll i=1;i<=n;i++) cin>>b[i];

  vector<ll>prefa1(n+2,0),suffa2(n+2,0);
  for(ll i=1;i<=n;i++){
    prefa1[i]=prefa1[i-1]+a1[i];
  }

  for(ll i=n-1;i>=0;i--){
    suffa2[i]=suffa2[i+1]+a2[i];
  }

  ll idx1=-1,idx2=-1;
  ll min1=LLONG_MAX;
  for(ll i=1;i<=n;i++){
    ll lsum=prefa1[i-1];
    ll rsum=suffa2[i];
    ll pathdis=b[i];

    if(lsum+rsum+pathdis<=min1){
      min1=lsum+rsum+pathdis;
      idx1=i;
    }
  }
  b[idx1]=1e5;
  ll min2=LLONG_MAX;
  for(ll i=1;i<=n;i++){
    ll lsum=prefa1[i-1];
    ll rsum=suffa2[i];
    ll pathdis=b[i];

    if(lsum+rsum+pathdis<=min2){
      min2=lsum+rsum+pathdis;
    }
  }

  cout<<min1+min2<<endl;
}