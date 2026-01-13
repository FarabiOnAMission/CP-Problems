#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    ll n=s.size();
    vector<ll>suffmin(n);
    suffmin[n-1]=s[n-1]-'0';
    for(ll i=n-2;i>=0;i++) {
      ll x=s[i]-'0';
      suffmin[i]=min(suffmin[i+1],x);
    }
    
    vector<ll>ans;
    for(ll i=0;i<n;i++){
      ll g=s[i]-'0';
      if(g>suffmin[i]){
        ans.push_back(min(9LL,g+1));
      }
      else
        ans.push_back(g);
    }

    sort(ans.begin(),ans.end());
    for(auto x:ans) cout<<x;
  

    cout<<"\n";
  }
} 