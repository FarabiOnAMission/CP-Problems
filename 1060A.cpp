#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  string s;
  cin>>s;
  ll cnt8=0;
  for(ll i=0;i<n;i++){
    ll g=s[i]-'0';
    if(g==8) cnt8++;
  }

  cout<<min(cnt8,n/11)<<endl;
}