#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  set<ll>s;
  s.insert(-3e14);
  s.insert(3e14);
  vector<ll>ans;
  ll sum=0;
  ll x;
  cin>>x;
  s.insert(x);
  s.insert(0);
  sum+=2*abs(x);
  cout<<sum<<endl;
  for(ll i=1;i<n;i++){
    ll x;
    cin>>x;
    s.insert(x);
    auto it = s.find(x);
    if(it != s.begin() && it!=s.end()){
      auto prev_it = prev(it) ;
      auto next_it = next(it) ;
      ll curr = *it;
      ll curr_prev = *prev_it;
      ll curr_next = *next_it;
      ll m = min(curr-curr_prev,curr_next - curr);
      sum += abs(m);
      if(prev_it != s.begin()){
      auto prev_prev_it = prev(prev_it);
      ll curr = *prev_it;
      ll curr_prev = *prev_prev_it;
      ll curr_next = *it;
      ll m = min(abs(curr_prev - curr),abs(curr - curr_next));
      sum += abs(m);
      ll old_dist_prev = min(*prev_it - *prev_prev_it, *next_it - *prev_it);
      sum -= old_dist_prev;
      }
      auto next_next_it = next(next_it);
      if(next_next_it != s.end()){
      ll curr = *next_it;
      ll curr_prev = *it;
      ll curr_next = *next_next_it;
      ll m1 = min(abs(curr_prev - curr),abs(curr - curr_next));
      sum += m1;
      ll old_dist = min(abs(*next_it - *prev_it), abs(*next_next_it - *next_it));
      sum-=old_dist;
      }
    }
    cout<<sum<<endl;
  }
}