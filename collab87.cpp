#include<bits/stdc++.h>

using namespace std;
using ll=long long;


int main(){

  ll mod=1e9+7;
  ll t;
  cin>>t;
  while(t--){

  string s;
  cin>>s;

  ll a=0,ab=0,ba=0;
  ll sz=s.size();
  for(ll i=0;i<sz;i++){
    if(s[i]=='a'){
      if(a==0)
        a=2;
      else{
        a=(a*2)%mod;
        ba=(ba+ab)%mod;
      }
    }
      else{
        ab=(ab+max(0LL,a-1))%mod;
        ab=(ab+ba)%mod;
      }
    }

    if(a==0) cout<<0<<endl;
    else{
      cout<<(a-1+ab)%mod<<endl;
    }
  }


  }
  