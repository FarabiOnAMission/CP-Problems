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
  vector<ll>a(26);
  for(ll i=0;i<26;i++) cin>>a[i];
  string ans="";
for(ll i=0;i<n;i++){
  char c=s[i];
    while(!ans.empty() && c>ans.back() && a[ans.back()-'a']>0){
      a[ans.back()-'a']--;
    ans.pop_back();
  }
    ans.push_back(c);
}
cout<<ans<<endl;
  }
}