#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  unordered_set<char>us;
  for(ll i=0;i<k;i++){
    char c;
    cin>>c;
    us.insert(c);
  }



  string dummy="";
  ll ans=0;
  for(ll i=0;i<n;i++){
    if(us.count(s[i])){
      dummy+=s[i];
    }
    else{
      ll x=dummy.size();
      ans+=(x*(x+1))/2;
      dummy="";
    }
  }
  ll x=dummy.size();
  ans+=(x*(x+1))/2;
  
  cout<<ans<<endl;
}