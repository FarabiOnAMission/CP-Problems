#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>ans;
    for(ll i=0;i<n;i++){
      if(s[i]=='0') 
        ans.push_back(i+1);
    }

    cout<<ans.size()<<endl;
    for(auto x:ans) cout<<x<<' ';
    cout<<endl;
  }
}