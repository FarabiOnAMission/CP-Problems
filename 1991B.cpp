#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n),b(n-1);
    for(ll i=0;i<n-1;i++){
      cin>>b[i];
    }
    for(ll i=1;i<n-1;i++){
      a[i]=b[i]|b[i-1];
    }
    a[0]=b[0];
    a[n-1]=b[n-2];
    ll flag=0;    
    for(ll i=0;i<n-1;i++){
      if((a[i] & a[i+1])!=b[i]){
        flag=1;
        break;
      }
    }
    if(flag) cout<<-1;
    else{
      for(auto x:a) cout<<x<<' ';
    }
    cout<<endl;
  }
}