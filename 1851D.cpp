#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
  ll n;
  cin>>n;
  vector<ll>pref,v(n+1,0);
  pref.push_back(0);
  for(ll i=1;i<n;i++)
  { 
    ll x;
    cin>>x;
    pref.push_back(x);
  }

  ll b=0;
  ll totalSum=(n*(n+1))/2;

  if(pref[n-1]!=totalSum){
    pref.push_back(totalSum);
    ll cnt=0;
    for(ll i=1;i<=n;i++){
      ll x=pref[i]-pref[i-1];
      if(x>0 && x<=n){
        v[x]++;
      if(v[x]==1){
        cnt++;
      }
    }
    }

    if(cnt==n){
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
  else{

  for(ll i=1;i<n;i++){
    ll x=pref[i]-pref[i-1];
    if(x>n){
      b=x;
    }
    else{
      if(v[x]==1){
        b=x;
      }
      else{
        v[x]++;
      }
    }
  }
  ll g=0;
  for(ll i=1;i<=n;i++){
    if(v[i]==0){
      g+=i;
    }
  }

  if(g==b){
    cout<<"YES"<<endl;
  }
  else 
    cout<<"NO"<<endl;
}
  }
}


/*
4
0 1 3 6 
1 2 3 

2
0 2 

*/