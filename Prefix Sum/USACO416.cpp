#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int g[805][805]{};
int p[805][805]{};

int main(){

  freopen("lazy.in", "r" ,stdin);
  freopen("lazy.out", "w", stdout);

  ll n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>g[i+j][i-j+n];
    }
  }

  for(int i=1;i<=2*n;i++){
    for(int j=1;j<=2*n;j++){
      p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+g[i][j];
    }
  }

  ll mx=0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    ll x=i+j;
    ll y=i-j+n;

    ll x1=max(1LL,x-k);
    ll y1=max(1LL,y-k);
    ll x2=min(2*n,x+k);
    ll y2=min(2*n,y+k);

    ll sum=p[x2][y2]-p[x2][y1-1]-p[x1-1][y2]+p[x1-1][y1-1];

    mx=max(mx,sum);
    }
  }

  cout<<mx<<endl;
}