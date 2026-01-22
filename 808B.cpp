#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
  ll n,k;
  cin>>n>>k;
  vector<ll>v(n),pref(n+1,0);
  for(ll i=0;i<n;i++){
    cin>>v[i];
    pref[i+1]=pref[i]+v[i];
  }

  ll l=0,r=k;
  ll c=0,sum=0;
  while(r<=n){
    sum+=pref[r]-pref[l];
    l++;
    r++;
    c++;
  }
  double ans=(sum*1.0)/c;
  cout<<setprecision(10)<<fixed<<ans<<endl;

}