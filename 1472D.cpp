#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    priority_queue<ll>pq;

    for(ll i=0;i<n;i++){
      ll x=v[i];
      pq.push(v[i]);
    }

    ll alice=0,bob=0;
    ll moves=1;
    while(!pq.empty()){
      ll x=pq.top();
      if(moves%2==1){
        if(x%2==0){
          alice+=x;
          pq.pop();
        }
        else{
          pq.pop();
        }
      }
      if(moves%2==0){
        if(x%2==1){
          bob+=x;
          pq.pop();
        }
        else{
          pq.pop();
        }
    }
    moves++;
  }

  if(alice>bob) cout<<"Alice"<<endl;
  else if(alice<bob) cout<<"Bob"<<endl;
  else cout<<"Tie"<<endl;
}
}