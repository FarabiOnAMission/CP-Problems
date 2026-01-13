#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  string a,b;
  cin>>n>>a>>b;

  vector<ll>ans;

  for(ll i=0;i<n;i++){
    if(a[i]==b[i]) continue;
    ll j=i+1;
    while(j<n && a[j]!=b[i]) j++;
    if(j==n){
      cout<<-1<<endl;
      return 0;
    }
    while(j>i){
      swap(a[j],a[j-1]);
      ans.push_back(j);
      j--;
    }
  }

  cout<<ans.size()<<endl;
  for(ll i=0;i<ans.size();i++){
    cout<<ans[i]<<' ';
  }
}