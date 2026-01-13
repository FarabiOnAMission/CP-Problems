#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
      cin>>v[i];
    }
    
    bool ans=true;
    for(ll i=1;i<n;i++){
      bool f1= (v[i]-v[i-1]==1);
      bool f2=(v[i]<v[i-1]);
      if(!f1 && !f2){
        ans=false;
        break;
      }
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}