#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
  string s;
  cin>>s;
  ll sz=s.size();
  for(ll i=0;i<sz;i++){
    if(i==sz/2)
      continue;
    
      cout<<s[i];
  }
  cout<<endl;
}