#include<bits/stdc++.h>

using namespace std;
using ll=long long;

/*
2D prefix sum is a sum from (0,0) to (i,j)
0,0 to i,j
P[i,j] = a[i,j]+P[i,j-1] + P[i-1,j] - P[i-1,j-1]

(a,b) to (c,d)
Ans = P[c,d] - P[c,b-1] - P[a-1,d] + P[a-1,b-1]
O(n*m)
*/

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,m;
  cin>>n>>m;

  int arr[n+1][m+1],p[n+1][m+1]{};

  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin>>arr[i][j];
      p[i][j]=p[i][j-1] + p[i-1][j] + arr[i][j] - p[i-1][j-1];
    }
  }

  ll q;
  cin>>q;
  while(q--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = p[c][d] - p[c][b-1] - p[a-1][d] + p[a-1][b-1];

    cout<<ans<<endl;
  }
}