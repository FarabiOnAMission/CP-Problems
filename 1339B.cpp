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
    for(ll i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());
    deque<ll>dq;
    for(ll i=0;i<n/2;i++){
      ll big=v[n-i-1];
      ll smol=v[i];
      dq.push_front(big);
      dq.push_front(smol);
    }
    if (n % 2 == 1) dq.push_front(v[n / 2]);
    while(!dq.empty()){
      ll x=dq.front();
      cout<<x<<' ';
      dq.pop_front();
    }

    cout<<endl;
  }
}