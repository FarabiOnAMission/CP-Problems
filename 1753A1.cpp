#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    vector<pair<ll,ll>>ans;
    if(n%2==1){
      cout<<-1<<endl;
      continue;
    }

    ll sum=0;
    ll l=0;
    for(ll i=1;i<n;i+=2){
    if(a[i]!=a[i-1]){
      ans.push_back({i,i});
      ans.push_back({i+1,i+1});
    }
    else{
      ans.push_back({i,i+1});
    }

    }

    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++){
      cout<<ans[i].first<<' '<<ans[i].second<<endl;
    }
  }
}