#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);

  ll n,m,k;
  cin>>n>>m>>k;
  char arr[n][m];
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }

  char ans[n*k][m*k];

    /*
    XXX.
    X..X
    XXX.
    X..X
    XXX.
    */

  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
      for(ll c=0;c<k;c++){
        for(ll r=0;r<k;r++){
          ll col=i*k+c;
          ll row=j*k+r;

          ans[col][row]=arr[i][j];
        }
      }
  }
}

  for(ll i=0;i<n*k;i++){
    for(ll j=0;j<m*k;j++){
      cout<<ans[i][j];
    }
    cout<<endl;
  }
}