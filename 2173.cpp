#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
  ll n,k;
  cin>>n>>k;
  vector<ll>a(n);
  for(ll i=0;i<n;i++) cin>>a[i];

  sort(a.begin(),a.end());
  a.erase(unique(a.begin(),a.end()),a.end());
  n=a.size();
  vector<ll>covered(n,false),pssible(n,false);

  for(ll i=0;i<n;i++){
    ll b=a[i];
    if(k/b >n){
      continue;
    }

    bool ok=true;
    for(ll m=b;m<=k;m+=b){
      if(!binary_search(a.begin(),a.end(),m)){
        ok=false;
        break;
      }
    }
    pssible[i]=ok;
  }
  
  ll c=0;
  vector<ll>ans;
  for(ll i=0;i<n;i++){
    if(pssible[i] && !covered[i]){
      c++;
      ll b=a[i];
      ans.push_back(b);
      for(ll m=b;m<=k;m+=b){
        auto it=lower_bound(a.begin(),a.end(),m);
        covered[it-a.begin()]=true;
      }
    }
  }
  bool fl=true;
  for(ll i=0;i<n;i++){
    if(!covered[i]){
      fl=false;
      break;
    }
  }
  if(!fl) cout<<-1<<endl;
  else{
    cout<<c<<endl;
    for(ll i=0;i<ans.size();i++){
      cout<<ans[i]<<' ';
    }
    cout<<endl;
  }
  }
  }