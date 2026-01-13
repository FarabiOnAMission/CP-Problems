#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    vector<ll>diff;
    
    for(ll i=0;i<k;i++){
      ll x;
      cin>>x;
      v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(ll i=1;i<k;i++){
      diff.push_back(v[i]-v[i-1]-1);

    }
    ll wrap= n - v.back() + v.front() - 1;
    if(wrap>0) diff.push_back(wrap);

    sort(diff.rbegin(),diff.rend());
    ll c=0;
    ll notinfected=0;
    for(ll i=0;i<diff.size();i++){
      ll lost=c*2;
      ll infected=diff[i]-lost;
      if(infected<=0) continue;
      else if(infected==1) notinfected+=1;
      else {
        notinfected+=infected-1;
      }
      c+=2;
    }

    cout<<n-notinfected<<endl;
  }
}