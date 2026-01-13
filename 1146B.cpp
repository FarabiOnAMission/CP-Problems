#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  string s;
  cin>>s;
  ll n=s.size();
  string check="";
  ll cnta=0;
  for(ll i=0;i<n;i++){
    if(s[i]!='a') check+=s[i];
    else cnta++;
  }
  ll sz=check.size();
  if(sz==0) return cout<<s<<endl,0;
  string a=check.substr(0,sz/2);
  string b=check.substr(sz/2);

  if(a!=b){
    cout<<":("<<endl;
    return 0;
  }
  string ans="";
  ll dum=0;
  for(ll i=0;i<n;i++){
    ans+=s[i];
    if(s[i]!='a') dum++;
    if(n-(i+1)==b.size()) break;
  }
    if(s.substr(ans.size())!=b) cout<<":("<<endl;
    else cout<<ans<<endl;
  }