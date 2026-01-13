#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    if(n%2==0){
      for(ll i=1;i<=n;i++){
        for(ll j=i+1;j<=n;j++){
          ll dist=j-i;
          if(dist<n/2){
            cout<<1<<" ";
          }
          else if(dist==n/2){
            cout<<0<<" ";
          }
          else{
            cout<<-1<<" ";
          }
        }
      }
      cout<<endl;
    }
    else{
      for(ll i=1;i<=n;i++){
        for(ll j=i+1;j<=n;j++){
          ll dist=j-i;
          if(dist<=n/2){
            cout<<1<<" ";
          }
          else{
            cout<<-1<<" ";
          }
        }
      }
      cout<<endl;
    }
}
}