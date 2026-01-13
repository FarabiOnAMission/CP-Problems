#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++) cin>>v[i];
  vector<ll>visited(n,false);
  ll cnt=0;
  ll curr=0;
  ll swipe=0;
  while(cnt!=n){
    ll l=0;
    for(ll i=0;i<n;i++){
      if(curr>=v[i] && visited[i]==false){
        cnt++;
        curr++;
        visited[i]=true;
      }

    }
    if(cnt==n) break;
      swipe++;

      for(ll i=n-1;i>=0;i--){
      if(curr>=v[i] && visited[i]==false){
        cnt++;
        curr++;
        visited[i]=true;
      }

    }
    if(cnt==n) break;
      swipe++;
  }

  cout<<swipe<<endl;

}