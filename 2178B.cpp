#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    ll c=0;
    if(s[0]=='u') 
    {c++;
      s[0]='s';
    }
    if(s[s.size()-1]=='u'){
      c++;
      s[s.size()-1]='s';
    }
    for(ll i=1;i<s.size()-1;i++){
      if(s[i]=='u' && s[i+1]=='u'){
        c++;
        s[i+1]='s';
      }
    }

    cout<<c<<endl;
  }
}