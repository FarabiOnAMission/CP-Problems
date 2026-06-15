#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll arr[11][11]={0};
    for(ll i=0;i<n;i++){
      string s;
      cin>>s;
      ll a1 = s[0]-'a';
      ll a2 = s[1] - 'a';
      arr[a1][a2]++;
    }
    ll cnt=0;
    ll prefsum[11][12]={0};
    ll prefsum_col[12][11]={0};

    for(ll i=0;i<11;i++){
      for(ll j=1;j<=11;j++){
        prefsum[i][j]+=(prefsum[i][j-1] + arr[i][j-1]);
      }
    }

    for(ll i=0;i<11;i++){
      for(ll j=1;j<=11;j++){
        cnt+= (arr[i][j-1]*(prefsum[i][11] - prefsum[i][j]));
      }
    }

    for(ll j=0;j<11;j++){
      for(ll i=1;i<=11;i++){
        prefsum_col[i][j]+=(prefsum_col[i-1][j] + arr[i-1][j]);
      }
    }

    for(ll j=0;j<11;j++){
      for(ll i=1;i<=11;i++){
        cnt+= (arr[i-1][j]*(prefsum_col[11][j] - prefsum_col[i][j]));
      }
    }

    cout<<cnt<<endl;
  }
}

/*
big hint: letters are only a to k and string length is 2

instead of iterating through the whole strings one by one
check with each individual string as the string size is two only
aa should be compared with ab ac ad ae .. ak
ab should be compared with ac ad ae .. ak

same for ba  should be compared with bb bc bd .. bk;


its for first same second different
then do the same for second same first different

use map or 2d array to track easy asf

  [a][a] [a][b] [a][c] [a][d] [a][e] [a][f] [a][g] [a][h] [a][i] [a][j] [a][k].... 
0   1       2     3       4     5       6     7       8     9       10    11       
*/
