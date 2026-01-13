#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>nodes(n);
    for(ll i=0;i<n;i++){
      cin>>nodes[i];
    }
    ll curr_nodes=1;
    ll next_nodes=0;
    ll height=0;

    if(n>1) height=1;
    for(ll i=1;i<n;i++){
      if(nodes[i]<nodes[i-1]){
        curr_nodes--;

        if(curr_nodes==0){
          curr_nodes=next_nodes;
          next_nodes=0;
          height++;
        }
      }
      next_nodes++;
    }

    cout<<height<<endl;
  }
}