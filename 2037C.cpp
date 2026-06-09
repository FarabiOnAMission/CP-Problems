#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    if(n<5) cout<<-1<<endl;
    else{
      for(ll i=1;i<=n;i++){
        if(i%2==0 && i!=4) cout<<i<<' ';
      }
      cout<<4<<' ';
      cout<<5<<' ';
      for(ll i=1;i<=n;i++){
        if(i%2==1 && i!=5) cout<<i<<' ';
      }
    cout<<endl;
    }

  }
}