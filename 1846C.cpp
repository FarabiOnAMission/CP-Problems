#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
ll t;
cin>>t;
while(t--){
  ll n,m,h;
  cin>>n>>m>>h;
  vector<vector<ll>>times(n);
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
      ll x;
      cin>>x;
      times[i].push_back(x);
    }
    sort(times[i].begin(),times[i].end());
  }

  vector<vector<ll>>pref(n);
  for(ll i=0;i<n;i++){
    pref[i].resize(m+1,0);
  }

  for(ll i=0;i<n;i++){
    for(ll j=1;j<=m;j++){
      pref[i][j]+=pref[i][j-1]+times[i][j-1];
    }
  }

  vector<pair<pair<ll,ll>,ll>>sort_list(n);
  for(ll i=0;i<n;i++){
      sort_list[i].first.first = 0;
      sort_list[i].first.second = 0;
      sort_list[i].second = i+1;
      
      ll penalty=0;
      for(ll j=1;j<=m;j++){
        if(pref[i][j]>h){
          break;
      }
      penalty += pref[i][j];
      
      sort_list[i].first.first = -j;
      sort_list[i].first.second = penalty;
    }
  }

  sort(sort_list.begin(),sort_list.end());
  ll ans=-1;
  for(ll i=0;i<n;i++){
    if(sort_list[i].second==1){
      ans=i+1;
      break;
    }
  }
  cout<<ans<<endl;
}
}

/*
straight forward problem
sort everyone's time to solve
then prefix sum them and check when it will pass h to get their total points and penalty and put them in one final array to sort and determine rank

some_bugs i encountered:
--forgot to intialize the times
--didnt handle the case where problems_solved = 0
--sorted by first ascending then second ascending, to tackle that instead of custom comparator used (-problems solved)

*/