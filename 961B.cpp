#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k;
  cin>>n>>k;
  vector<ll>a(n),t(n);
  for(ll i=0;i<n;i++) cin>>a[i];
  for(ll i=0;i<n;i++) cin>>t[i];

  ll s=0;
  for(ll i=0;i<n;i++){
    if(t[i]==1)
      s+=a[i];
  }

  ll l=0,m=-1;
  for(ll r=0;r<n;r++){
    if(t[r]==0){
    s+=a[r];
    }
    if(r-l>=k){
    if(t[l]==0){
    s-=a[l];
    }
    l++;
    }
    m=max(m,s);
  }

  cout<<m<<endl;
}