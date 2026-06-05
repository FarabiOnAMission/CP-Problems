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
    ll ans=n;
    for(char c='a';c<='z';c++){
      ll max_length=-1;
      vector<ll>v;
      for(ll i=0;i<s.size();i++){
        if(s[i]==c) v.push_back(i);
      }
      
      if(v.size()==0){
        max_length=n;
      }
      else{
        max_length = max(max_length,v[0]);
        for(ll i=1;i<v.size();i++){
          max_length=max(max_length,v[i]-v[i-1]-1);
        }
        max_length = max(max_length,n-v.back()-1);

      }
      ll cnt=0;
      while(max_length>0){
        max_length/=2;
        cnt++;
      }
      ans=min(ans,cnt);
    }

    cout<<ans<<endl;
  }
}