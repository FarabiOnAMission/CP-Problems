#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  string s,t;
  cin>>s>>t;
  vector<ll>sa,ta;
  string ws="",wt="";
  for(ll i=0;i<s.size();i++){
    if(s[i]=='A') continue;
    ws+=s[i];
  }
  for(ll i=0;i<t.size();i++){
    if(t[i]=='A') continue;
    wt+=t[i];
  }
  if(ws!=wt){
    cout<<-1<<endl;
    return 0;
  }
  ll c=0;
  for(ll i=0;i<s.size();i++){
    if(s[i]=='A') c++;
    else{
      sa.push_back(c);
      c=0;
    }
  }
  sa.push_back(c);
  c=0;
  for(ll i=0;i<t.size();i++){
    if(t[i]=='A') c++;
    else{
      ta.push_back(c);
      c=0;
    }
  }
  ta.push_back(c);
  ll ans=0;
  for(ll i=0;i<sa.size();i++){
    ans+=abs(sa[i]-ta[i]);
  }
  cout<<ans<<endl;


}