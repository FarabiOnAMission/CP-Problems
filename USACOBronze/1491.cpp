#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  int n,u;
  cin>>n>>u;
  char arr[n][n];
  int paintcnt[n][n],unpaintcnt[n][n],mincnt[n][n];

  for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }

  ll totalcnt=0;
  for(ll i=0;i<n/2;i++){
    for(ll j=0;j<n/2;j++){
      ll painted=0,unpainted=0;
      if(arr[i][j]=='.') unpainted++;
      else painted++;

      if(arr[n-i-1][j]=='.') unpainted++;
      else painted++;

      if(arr[n-i-1][n-j-1]=='.') unpainted++;
      else painted++;

      if(arr[i][n-j-1]=='.') unpainted++;
      else painted++;

      paintcnt[i][j]=painted;
      paintcnt[n-i-1][j]=painted;
      paintcnt[n-i-1][n-j-1]=painted;
      paintcnt[i][n-j-1]=painted;

      unpaintcnt[i][j]=unpainted;
      unpaintcnt[n-i-1][j]=unpainted;
      unpaintcnt[n-i-1][n-j-1]=unpainted;
      unpaintcnt[i][n-j-1]=unpainted;

      ll mincnts=min(painted,unpainted);

      mincnt[i][j]=mincnts;
      mincnt[n-i-1][j]=mincnts;
      mincnt[n-i-1][n-j-1]=mincnts;
      mincnt[i][n-j-1]=mincnts;

      totalcnt+=min(painted,unpainted);
    }
  }
    cout<<totalcnt<<endl;
    for(ll i=1;i<=u;i++){
      ll x,y;
      cin>>x>>y;
      x--;
      y--;
      totalcnt-=mincnt[x][y];
      if(arr[x][y]=='.'){
        arr[x][y]='#';
        unpaintcnt[x][y]--;
        unpaintcnt[n-x-1][y]--;
        unpaintcnt[x][n-y-1]--;
        unpaintcnt[n-x-1][n-y-1]--;
        
        paintcnt[x][y]++;
        paintcnt[n-x-1][y]++;
        paintcnt[x][n-y-1]++;
        paintcnt[n-x-1][n-y-1]++;

        ll mincnts=min(unpaintcnt[x][y],paintcnt[x][y]);
        mincnt[x][y]=mincnts;
        mincnt[n-x-1][y]=mincnts;
        mincnt[n-x-1][n-y-1]=mincnts;
        mincnt[x][n-y-1]=mincnts;

        totalcnt+=mincnts;
      }

      else if(arr[x][y]=='#'){
        arr[x][y]='.';
        unpaintcnt[x][y]++;
        unpaintcnt[n-x-1][y]++;
        unpaintcnt[x][n-y-1]++;
        unpaintcnt[n-x-1][n-y-1]++;
        
        paintcnt[x][y]--;
        paintcnt[n-x-1][y]--;
        paintcnt[x][n-y-1]--;
        paintcnt[n-x-1][n-y-1]--;

        ll mincnts=min(unpaintcnt[x][y],paintcnt[x][y]);
        mincnt[x][y]=mincnts;
        mincnt[n-x-1][y]=mincnts;
        mincnt[n-x-1][n-y-1]=mincnts;
        mincnt[x][n-y-1]=mincnts;

        totalcnt+=mincnts;
      }

      cout<<totalcnt<<endl;
    }
}