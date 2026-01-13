#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    ll arr[n][m];
    ll cnt1=0;
    for(ll i=0;i<n;i++){
      for(ll j=0;j<m;j++){
        char c;
        cin>>c;
        arr[i][j]=c-'0';
        if(arr[i][j]==1) cnt1++;
      }
    }

    if(cnt1==0){
      cout<<0<<endl;
      continue;
    }

    ll min_ones=4;
    for(ll i=0;i+1<n;i++){
      for(ll j=0;j+1<m;j++){
        ll s=arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
        min_ones=min(min_ones,s);
      }
    }

    if(min_ones<=2) cout<<cnt1<<endl;
    else if(min_ones==3) cout<<cnt1-1<<endl;
    else cout<<cnt1-2<<endl;
  }
}


/*
1110
0111  
0111
*/