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
    vector<ll>odd;
    vector<ll>even;
    bool f=false;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      if(v[i]%2==0)
        even.push_back(v[i]);
      else odd.push_back(v[i]);
    }
    if(even.size()>=2){
      cout<<even[0]<<' '<<even[1]<<endl;
      continue;
    }

    if(even.size()==1){
      ll x=even[0];
      for(ll i=0;i<odd.size();i++){
        ll mx=max(x,odd[i]);
        ll mn=min(x,odd[i]);

        if((mx%mn)%2==0){
          cout<<mn<<' '<<mx<<endl;
          f=true;
          break;
        }
      }
    }
    if(f) continue;

    for(ll i=0;i<n-1;i++){
      bool c=false;
        for(ll j=i+1;j<n;j++){
          if((v[j]%v[i])%2==0){
            cout<<v[i]<<' '<<v[j]<<endl;
            c=true;
            break;
          }
          }
          if(c) {
            f=true;
            break;
        }
      }
      if(f) continue;

      cout<<-1<<endl;
    }
  }
  