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
    ll evencnt=0;
    ll oddcnt=0;
    ll sum=0;
    ll mx=0;
    for(ll i=0;i<n;i++){
      cin>>v[i];
   
      if(v[i]%2==0){
        evencnt++;
      }
      else
        oddcnt++;

      sum+=v[i];
      mx=max(mx,v[i]);
  }
  if(evencnt==0 || oddcnt==0){
    cout<<mx<<endl;
  }
  else{
      cout<<sum-oddcnt+1<<endl;
  }

}
}