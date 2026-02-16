#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>f(n),v(n);
    for(ll i=0;i<n;i++){
      cin>>f[i];
    }

    for(ll i=1;i<n-1;i++){
      v[i]=(f[i+1]-2*f[i]+f[i-1])/2;
    }

    ll sum_last=0,sum_first=0;
    for(ll i=1;i<n;i++){
      sum_last += i * v[i]; 
      sum_first += (n-1-i) * v[i];
    }

    v[n-1]=(f[0]-sum_last)/(n-1);
    v[0]=(f[n-1]-sum_first)/(n-1);

    for(auto x:v) cout<<x<<' ';
    cout<<endl;
  }
}