#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  string s;
  cin>>s;
  for(ll x=450;x>=0;x--){
    ll sum=0;
    ll c=0;
    for(ll i=0;i<n;i++){
      ll g=s[i]-'0';
      sum+=g;
      if(sum==x){
        c++;
        sum=0;
      }
    }

    if(c>=2 && sum==0){
      cout<<"YES"<<endl;
      return 0;
    }
  }

  cout<<"NO"<<endl;
}