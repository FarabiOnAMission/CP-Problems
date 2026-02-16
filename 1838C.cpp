#include<bits/stdc++.h>

using namespace std;
using ll=long long;


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    ll arr[n+1][m+1];
    ll switch1=0,switch2=(n+1)/2;
    for(ll i=1;i<=n;i++){
      if(i%2==1){
        for(ll j=1;j<=m;j++){
          arr[i][j]=(n-switch2)*(m)+j;
        }
        switch2--;
      }
      else{
        for(ll j=1;j<=m;j++){
          arr[i][j]=(switch1)*(m)+j;
        }
        switch1++;
      }
    }

    for(ll i=1;i<=n;i++){
      for(ll j=1;j<=m;j++){
        cout<<arr[i][j]<<' ';
      }
      cout<<endl;
    }
  }
}