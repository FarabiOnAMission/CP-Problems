#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,h;
    cin>>n>>h;
    ll curr_min=h,curr_max=h,curr_time=0;
    bool flag=true;
    while(n--){
    ll t,l,u;
    cin>>t>>l>>u;
    ll diff= t-curr_time;
    curr_time = t;
    curr_min = max(1LL,curr_min + diff*-1);
    curr_max = max(1LL, curr_max + diff*1);
    if(curr_min>u || curr_max<l){
      flag = false;
    }
    curr_min = max(curr_min,l);
    curr_max = min(curr_max,u);
  }
  if(flag) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  }
}