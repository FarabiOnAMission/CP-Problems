#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    set<ll>s;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      s.insert(v[i]);
    }
    if(s.size()==1){
      cout<<-1<<'\n';
      continue;
    }
    ll ans=LLONG_MAX,saved=0,cmp=v[0];
    for(ll i=0;i<n;i++){
      if(cmp!=v[i]){
        ans=min(ans,i-saved);
        saved=i+1;
      }
    }
    cout<<min(ans,n-saved)<<endl;
  }
}

/*
As the array is always good 
there can be 3 cases
1. 3 3 3 3 5 3 3 3 5 3 3 

either the prefix is the answer
or the middle is the answer
or the suffix is the answer

so iterate and update answer

if all elements are same then we cant avoid the beautiful so it will be -1

*/