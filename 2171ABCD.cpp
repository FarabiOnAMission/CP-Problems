#include<bits/stdc++.h>

using namespace std;
using ll=long long;
using vll=vector<ll>;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vll a(n+1);
    for(ll i=1;i<=n;i++){
      cin>>a[i];
    }
    
    ll curr=n+1;
    bool f=true;
    for(ll i=1;i<n;i++){
      curr=min(curr,a[i]);
      if(curr==n-i+1){
        f=false;
        break;
      }
    }

    if(!f){
      cout<<"No"<<endl;
      continue;
    }
    else cout<<"Yes"<<endl;

    vector<pair<ll,ll>>edges;
    vll mins;
    curr=a[1];

    for(ll i=2;i<=n;i++){
      if(a[i]>curr){
        edges.push_back({curr,a[i]});
        while(!mins.empty()){
          ll puratonmin=mins.back();
          if(puratonmin<a[i]){
            edges.push_back({puratonmin,a[i]});
            mins.pop_back();
          }
          else break;
        }
      }
      else{
        mins.push_back(curr);
        curr=a[i];
      }
    }

    for(auto x:edges){
      cout<<x.first<<' '<<x.second<<endl;
    }
  }
}