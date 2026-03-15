#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll make_even(ll start,ll end){
  ll a=start+200000000;
  ll b=end+200000000;
  return (b/2)-((a-1)/2);
}

int main(){
  ll l,r,d,u;
  cin>>l>>r>>d>>u;
  ll ans=0;
  for(ll x=l;x<=r;x++){
    ll abs_x = abs(x);
    ll y_start = max(d,-abs_x);
    ll y_end = min(u,abs_x);
    if(y_start<=y_end && abs_x%2==0){
      ans+=(y_end-y_start+1);
    }

    y_start = max(d,abs_x+1);
    y_end = u;
    if(y_start<=y_end){
      ans+=make_even(y_start,y_end);
    }

    y_start = d;
    y_end = min(-abs_x-1,u);
    if(y_start<=y_end){
      ans+=make_even(y_start,y_end);
    }
  }

  cout<<ans<<endl;
}