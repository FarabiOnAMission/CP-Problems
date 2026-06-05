#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>v(2*n);
  vector<pair<ll,ll>>dist(100005);
  vector<ll>did(100005,0);
  for(ll i=0;i<2*n;i++){
    cin>>v[i];
    if(did[v[i]]==0){
      did[v[i]]++;
      dist[v[i]].first=i+1;
    }
    else{
      dist[v[i]].second=i+1;
    }
  }

  ll pos1=1,pos2=1,total_travelled=0;
  for(ll i=1;i<=n;i++){
    ll x1=dist[i].first;
    ll x2=dist[i].second;

    ll optionA = abs(x1-pos1) + abs(x2-pos2);
    ll optionB = abs(x1-pos2) + abs(x2-pos1);

    pos1=x1,pos2=x2;
    total_travelled+=min(optionA,optionB);
  }


  /*for(ll i=1;i<=n;i++){
    ll x1=dist[i].first;
    ll x2=dist[i].second;
    if(x1==LLONG_MAX){
      total_travelled+=abs(curr_Dima-x2);
      curr_Dima=x2;
    }
    else{
      total_travelled+=abs(curr_Dima-x1);
      curr_Dima=x1;

    }
  }
    */
  cout<<total_travelled<<endl;
}