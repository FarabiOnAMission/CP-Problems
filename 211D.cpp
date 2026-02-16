#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(m);
    for(ll i=0;i<m;i++){
      cin>>v[i];
    }

    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
      ll idx=i/2;
      for(ll j=1;j<=6;j++){
        if(i%2==0){
        if(j%2==1){
          cout<<v[idx]<<' ';
        }
        else{
          cout<<v[m-idx-1]<<' ';
        }
      }
      else{
        if(j%2==1){
          cout<<v[m-idx-1]<<' ';
        }
        else{
          cout<<v[idx]<<' ';
        }
      }
      }
      cout<<endl;
    }
  }
}