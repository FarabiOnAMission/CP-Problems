#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,d;
  cin>>n>>d;
  vector<ll>v(d);
  for(ll i=0;i<d;i++) cin>>v[i];

  sort(v.begin(),v.end());
  bool dirty=false;
  
  if(d==0){
    cout<<"YES"<<endl;
    return 0;
  }

  if(v[0]==1 || v[d-1]==n){
    cout<<"NO"<<endl;
    return 0;
  }


  for(ll i=1;i<d-1;i++){
    if(v[i]==v[i-1]+1 && v[i]+1==v[i+1]){
      dirty=true;
      break;
    }
  }

  if(dirty) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
}