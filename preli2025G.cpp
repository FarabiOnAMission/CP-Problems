#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    s+="\\";
    s+="0";
    ll stlen=0,szof=0;
    for(ll i=0;i<s.size();i++){
      if(s[i]=='\\' && s[i+1]=='0'){
        break;
      }
      stlen++;
    }
    ll nll=0;
    for(ll i=0;i<s.size();i++){
      if(s[i]=='\\' && s[i+1]=='0'){
        nll++;
      }
      szof++;
    }

    cout<<szof-nll<<' '<<stlen<<endl;
  }
}