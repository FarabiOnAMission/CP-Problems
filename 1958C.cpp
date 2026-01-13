#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll s=0,c1=0,c2=0;
    vector<ll>a(n);
    map<ll,ll>freq;
    for(ll i=0;i<n;i++){
      cin>>a[i];
      freq[a[i]]++;
      s+=a[i];
    }
    if(2*s%n!=0){
      cout<<0<<endl;
      continue;
    }
    ll x=2*s/n;
    for(ll i=0;i<n;i++){
      ll k=x-a[i];
      if(k!=a[i]){
        c1+=freq[k];
      }
      else{
        c2+=freq[k]-1;
      }
    }

    cout<<(c1+c2)/2<<endl;
  }
}