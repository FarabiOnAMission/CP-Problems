#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  /*
  E er jonno X,Y duitai beshi only south crash, X boro Y choto only North crash,X boro, Y shoman hole West crash
  N er jonno Y boro X shoman hole S crash, X,Y boro hoile west crash , X choto Y boro hole east crush
  
  */

  ll n;
  cin>>n;
  vector<pair<char,pair<ll,ll>>>v(n);
  for(ll i=0;i<n;i++){
    cin>>v[i].first>>v[i].second.first>>v[i].second.second;
  }

  for(ll i=0;i<n;i++){
    char c=v[i].first;
    ll a=v[i].second.first;
    ll b=v[i].second.second;
    ll ans=LLONG_MAX;
    if(c=='N'){
      for(ll j=0;j<n;j++){
        if(j==i) continue;
        char c2=v[j].first;
        ll a2=v[j].second.first;
        ll b2=v[j].second.second;
        if(c2=='E' && a>=a2 && b2>=b){
          ans=min(a-a2,ans);
        }
      }
    }
  }

}