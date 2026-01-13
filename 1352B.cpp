#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    ll x=n-(k-1)*2;
    if(x>0 && x%2==0){
      cout<<"YES"<<endl;
      for(ll i=0;i<k-1;i++){
        cout<<2<<' ';
      }
      cout<<x<<endl;
      continue;
    }

    ll y=n-(k-1);
    if(y>0 && y%2==1){
      cout<<"YES"<<endl;
      for(ll i=0;i<k-1;i++){
        cout<<1<<' ';
      }
      cout<<n-(k-1)<<endl;
      continue;
    }
    
      cout<<"NO"<<endl;
    }
    }