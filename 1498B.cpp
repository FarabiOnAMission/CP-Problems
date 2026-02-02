#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,w;
    cin>>n>>w;
    vector<ll>v(n);
    multiset<ll>ms;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      ms.insert(v[i]);
    }

    ll height=1,space=w;
    while(!ms.empty()){
      auto it= ms.upper_bound(space);
      if(it!=ms.begin()){
        it--;
        int curr=*it;
        space-=curr;
        ms.erase(it);
      }
      else{
        height++;
        space=w;
      }
    }

    cout<<height<<endl;

  }
}