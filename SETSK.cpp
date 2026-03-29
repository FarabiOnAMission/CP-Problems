#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>b(n+1),s,unwanted;
    for(ll i=1;i<=n;i++){
      cin>>b[i];
      if(b[i]==1) s.push_back(i);
      else unwanted.push_back(i);
    }
    bool ans=true;
    for(ll i=1;i<s.size();i++){
      if(s[i]-s[i-1]<=k){
        ans=false;
      }
    }

    for(ll i=0;i<unwanted.size();i++){
      bool fal=false;
      for(ll j=0;j<s.size();j++){
        if(abs(unwanted[i]-s[j])<=k){
          fal=true;
          break;
          }
      }
        if(!fal){
            ans=false;
          }
    }

    if(!ans) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

  }
}