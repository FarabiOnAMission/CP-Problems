#include<bits/stdc++.h>

using namespace std;
using ll=long long;
using vll=vector<ll>;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll ans=0,cnt=0;
    set<char>st;
    bool isI=false;
    for(ll i=0;i<n;i++){
      st.insert(s[i]);
      if(s[i]=='I') isI=true;
    }
    if(st.size()==1 && isI){
      ans+=n*k-1;
      cout<<ans<<endl;
      continue;
    }

    char firstchar;
    for(ll i=0;i<n;i++){
      if(s[i]!='I'){firstchar=s[i];
        break;
      }
    }
    char prev=firstchar;
    for(ll i=0;i<n;i++){
      if(s[i]=='I'){
        s[i]=prev;
      }
      else {
        prev=s[i];
      }
    }

    for(ll i=0;i<n-1;i++){
      if(s[i]==s[i+1]) cnt++;
    }
    ans+=cnt*k;
    if(k>1 && s[0]==s[n-1]) {
        ans+=(k-1);
    }
    cout<<ans<<endl;
  }
}