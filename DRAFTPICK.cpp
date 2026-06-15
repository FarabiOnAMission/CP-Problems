#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(k+1);
    for(ll i=k;i>=1;){
      
      for(ll j=1;j<=n;j++){
        if(i==0) break;
        v[i]=j;
        i--;
      }

      if(i==0) break;

      for(ll j=n;j>=1;j--){
        if(i==0) break;
        v[i]=j;
        i--;
      }
    }
    vector<ll>total(n+1);
    for(ll i=1;i<=k;i++){
      total[v[i]]+=i;
    }

    ll ans = *max_element(total.begin(),total.end());
    cout<<ans<<endl;
  }
}

/*
1 2 3 4 5 6  7 
7 -- 0
6 -- 1
5 -- 2
4 -- 2
3 -- 1
2 -- 0
1 -- 2

*/