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
    sort(v.begin(),v.end());
    ll mn=0;
    for(ll i=0;i<n;i++){
      if(v[i]==mn) mn++;
      else if(v[i]>mn)
        break;
    }

    cout<<mn<<endl;
  }
}