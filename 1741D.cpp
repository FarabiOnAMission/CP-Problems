#include<bits/stdc++.h>

using namespace std;
using ll=long long;
vector<ll>v;

ll solve(ll l,ll r){

  if(l==r) return 0;

  ll mid=l+(r-l)/2;
  ll costLeft=solve(l,mid);
  ll costRight=solve(mid+1,r);

  if(costLeft==-1 || costRight==-1) return -1;

  if(v[mid]+1==v[mid+1]){
    return costLeft + costRight;
  }

  if(v[r]+1 == v[l]){
    swap_ranges(v.begin()+l,v.begin()+mid+1,v.begin()+mid+1);
    return costLeft + costRight + 1;
  }

  return -1;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    v.resize(n+1);
    for(ll i=1;i<=n;i++){
      cin>>v[i];
    }

    ll ans=solve(1,n);

    if(ans==-1){
      cout<<-1<<endl;
    }
    else{
      cout<<ans<<endl;
    }
  }
}