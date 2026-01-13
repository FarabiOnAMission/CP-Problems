#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    char arr[n][m];
    for(ll i=0;i<n;i++){
      for(ll j=0;j<m;j++){
        cin>>arr[i][j];
      }
    }
    for(ll j=m-1;j>=0;j--){
      ll lastfall=n-1;
      for(ll i=n-1;i>=0;i--){
        if(arr[i][j]=='*'){
          arr[i][j]='.';
          arr[lastfall][j]='*';
          lastfall--;
      }
      else if(arr[i][j]=='o'){
          lastfall=i-1;
        }
        }
      }

    for(ll i=0;i<n;i++){
      for(ll j=0;j<m;j++){
        cout<<arr[i][j];
      }
      cout<<endl;
    }
    cout<<endl;
  }
}
