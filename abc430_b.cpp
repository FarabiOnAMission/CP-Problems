#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll m,n;
  cin>>n>>m;
  set<vector<string>>s;
  char arr[n][n];
  for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++)
      cin>>arr[i][j];
  }

  for(ll i=0;i<=n-m;i++){
    for(ll j=0;j<=n-m;j++){
      vector<string>v;
      for(ll k=0;k<m;k++){
        string curr= "";
        for(ll l=0;l<m;l++){
          curr+=arr[i+k][j+l];
        }
        v.push_back(curr);
      }

      for(ll k=0;k<m;k++){
        string curr= "";
        for(ll l=0;l<m;l++){
          curr+=arr[i+l][j+k];
        }
        v.push_back(curr);
      }

      s.insert(v);
    }
  }

  cout<<s.size()<<endl;
} 