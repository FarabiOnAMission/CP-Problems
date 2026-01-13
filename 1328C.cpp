#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    string s;
    cin>>n>>s;
    string a,b;
    a+='1',b+='1';
    bool set1=false;
    for(ll i=1;i<n;i++){
      if(s[i]=='1' && set1==false){
        set1=true;
        a+='1';
        b+='0';
      }
      else{
        if(set1){
          a+='0';
          b+=s[i];
        }
        else if(s[i]=='2'){
          a+='1',b+='1';
        }
        else{
          a+='0',b+='0';
        }
      }
    }

    cout<<a<<endl;
    cout<<b<<endl;
  }
}