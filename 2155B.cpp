#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;

    if(n*n-k==1){
      cout<<"NO"<<endl;
      continue;
    }
    cout<<"YES"<<endl;
    vector<vector<char>> ans(n, vector<char>(n, '.'));
    ll rem=n*n-k;

    for(ll i=0;i<n && rem;i++){
      for(ll j=0;j<n && rem;j++){
      if(i==0){
        if(j==0){
          ans[i][j]='R';
          rem--;
        }
        else{
          ans[i][j]='L';
          rem--;
        }
      }
      else{
        ans[i][j]='U';
        rem--;
      }
      }
    }

    for(ll i=0;i<n;i++){
      for(ll j=0;j<n;j++){
        if(ans[i][j]=='.'){
          ans[i][j]='D';
        }
      }
    }


    for(ll i=0;i<n;i++){
      for(ll j=0;j<n;j++){
        cout<<ans[i][j];
      }
      cout<<endl;
    }
  }
}