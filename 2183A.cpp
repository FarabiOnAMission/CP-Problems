#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    bool z=false;
    for(ll i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]==0) z=true;
    }
    if(!z){
      cout<<"Alice"<<endl;
      continue;
    }
    if(arr[0]==0 && arr[n-1]==0){
      cout<<"Bob"<<endl;
    }
    else{
      cout<<"Alice"<<endl;
    }
  }
}