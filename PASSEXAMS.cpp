#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll arr[3];
    ll c=0;
    for(ll i=0;i<3;i++){
      cin>>arr[i];
      if(arr[i]>=50) c++;
    }
    if(c>=2){
      cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
  }
}