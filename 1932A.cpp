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
    ll cnt=0;
    s+='*';
    for(ll i=0;i<n;i++){
      if(s[i]=='*' && s[i+1]=='*') break;
      else if(s[i]=='@') cnt++;
    }

    cout<<cnt<<endl;
  }
}