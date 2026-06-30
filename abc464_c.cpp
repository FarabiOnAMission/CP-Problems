#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  ll n,m;
  cin>>n>>m;
  map<ll,ll>freq;
  set<ll>s;
  vector<pair<ll,pair<ll,ll>>>store;
  for(ll i=0;i<n;i++){
    ll a,d,b;
    cin>>a>>d>>b;
    store.push_back({d,{a,b}});
    freq[a]++;
  }
  sort(store.begin(),store.end());
  ll total_color = freq.size();

  ll idx=0;
  for(ll j=1;j<=m;j++){
    while(idx<n && store[idx].first<=j){
      ll col1 = store[idx].second.first;
      ll col2 = store[idx].second.second;
      
      if(col1==col2){
        idx++;
        continue;
      }
      
      if(freq[col1]==1){
        total_color--;
      }

      if(freq[col2]==0){
        total_color++;
      }

      freq[col1]--;
      freq[col2]++;
      idx++;
    }
    cout<<total_color<<endl;
  }
}

/*
Count the total number of unique colors available on one go, store them in a set
Sort based on days, then process each day from 1 to m
on day j, remove Ai from the set and insert Bi
then answer the total set size as unique colors
use map to check whether a color exists or not when changing a birds color from A to B

6 7
1 3 2
2 6 5
5 5 1
3 3 5
4 1 6
6 3 6

store
1 4 6
3 1 2
3 3 5
3 6 6
5 5 1
6 2 5

j=1 -- 5
j=1 to 2 -- 5
j=3 -- 3
j=3 to 4 -- 3
j=5 -- 4
j=6 -- 4



*/