#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  string s;
  cin>>s;
  set<ll>uni;
  for(ll i=0;i<s.size();i++){
    uni.insert(s[i]);
  }
  if(uni.size()==1) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}