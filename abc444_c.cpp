#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>a(n);
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  ll x=*max_element(a.begin(),a.end());
  vector<ll>freq(x+10,0);
  for(ll i=0;i<n;i++){
    freq[a[i]]++;
  }
  for(ll i=freq.size()-2;i>=0;i--){
    freq[i]=freq[i+1]+freq[i];
  }

  for(ll i=1;i<freq.size()-1;i++){
    ll c=freq[i];
    freq[i]=c%10;
    freq[i+1]+=c/10;
  }
  bool f=false;
  for(ll i=freq.size()-1;i>=1;i--){
    if(freq[i]!=0) f=true;
    if(f) cout<<freq[i];
  }
}