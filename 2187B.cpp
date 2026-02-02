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
    s="0"+s+"0";
    ll prevstd=0;
    ll seg=0,curr_zeros=0;
    for(ll i=0;i<s.size();i++){
      if(s[i]=='0'){
        curr_zeros++;
      }
      else{
        seg+=(curr_zeros)/3;
        curr_zeros=0;
        prevstd++;
      }

    }

    seg+=curr_zeros/3;
    cout<<seg+prevstd<<endl;
  }
}