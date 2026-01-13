#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  int n,q;
  cin>>n>>q;

  char arr[n+1][n+1];
  int a[n+1][n+1]{};
  int p[n+1][n+1]{};
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>arr[i][j];
      if(arr[i][j]=='*'){
        a[i][j]++;
      }
    }
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      p[i][j]=p[i-1][j]+p[i][j-1]+a[i][j]-p[i-1][j-1];
    }
  }
  while(q--){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll ans=p[x2][y2]-p[x1-1][y2]-p[x2][y1-1]+p[x1-1][y1-1];
    cout<<ans<<endl;
  }

}