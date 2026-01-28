#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,q;
  cin>>n>>q;
  ll arr[3][n+1];
  for(ll i=0;i<=2;i++){
    for(ll j=0;j<=n;j++){
      arr[i][j]=0;
    }
  }

  ll bad_pairs=0;
  while(q--){
    ll r,c;
    cin>>r>>c;
  if(arr[r][c]==0){
    arr[r][c]=1;
    if(arr[3-r][c]==1){
      bad_pairs++;
    }
    if(arr[3-r][c-1]==1){
      bad_pairs++;
    }
    if(c+1<=n){
    if(arr[3-r][c+1]==1){
      bad_pairs++;
    }
  }
  }
  else{
    arr[r][c]=0;
    if(arr[3-r][c]==1){
      bad_pairs--;
    }
    if(arr[3-r][c-1]==1){
      bad_pairs--;
    }
    if(c+1<=n){
    if(arr[3-r][c+1]==1){
      bad_pairs--;
    }
  }
  }
  if(bad_pairs>0) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
  }

  
  }