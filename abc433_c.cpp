#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  string s;
  cin>>s;
  ll n=s.size();
  ll l=0,r=1,ans=0;
  while(l<n){
    ll c1=1,c2=0;
    while(l+1<n && s[l]==s[l+1]){
      l++;
      c1++;
    }

    ll digit2=s[l]+1;
    r=l+1;
    while(r<n && s[r]==digit2){
      r++;
      c2++;
    }
    l++;
    ans+=min(c1,c2);
  }

  cout<<ans<<endl;
}