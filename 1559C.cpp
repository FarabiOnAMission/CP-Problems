#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>arr(n+1);
    ll start=-1;
    for(ll i=1;i<=n;i++){
      cin>>arr[i];
    }

    for(ll i=1;i<n;i++) {
      if(arr[i]==0 && arr[i+1]==1){
        start=i+1;
        break;
      }
    }

    if(start!=-1){
    bool visit=false;
    for(ll i=1;i<=n+1;i++){
      if(i==start){
        cout<<n+1<<' ';
        visit=true;
        continue;
      }
      else{
        if(!visit){
        cout<<i<<' ';
        }
        else{
          cout<<i-1<<' ';
        }
      }
    }
    cout<<endl;
  }
  else if(arr[1]==1){
    cout<<n+1<<' ';
    for(ll i=1;i<=n;i++) cout<<i<<' ';

    cout<<endl;
  }
  else{
    for(ll i=1;i<=n;i++){
      cout<<i<<' ';
    }
    cout<<n+1<<endl;
  }
  }
}