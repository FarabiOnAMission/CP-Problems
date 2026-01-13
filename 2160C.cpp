#include<bits/stdc++.h>

using namespace std;
using ll=long long;

string toBinary(ll n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary += (n & 1) ? '1' : '0';
        n >>= 1;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string s=toBinary(n);
    string k;
    ll i=s.size()-1;
    while(s[i]!='1' && i>=0){
      k+=s[i];
      i--;
    }
    k+=s;
    ll x=k.size();
    if(x%2){
      if(k[x/2]=='1'){
        cout<<"NO"<<endl;
        continue;
      }
    }
    string k2=k;
    reverse(k2.begin(),k2.end());

    if(k2==k){
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
}