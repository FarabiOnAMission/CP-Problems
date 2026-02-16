#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll nCr(ll n,ll r){
    double sum = 1;
    for (ll i=1;i<=r;i++){
        sum = sum*(n-r+i)/i;
    }
    return sum;
}

int main(){
  ll n,m;
  cin>>n>>m;
  vector<ll>v(n+1);
  for(ll i=0;i<m;i++){
    ll a,b;
    cin>>a>>b;
    v[a]++;
    v[b]++;
  }

  for(ll i=1;i<=n;i++){
    cout<<nCr(n-v[i]-1,3)<<' ';
  }
  cout<<endl;
}