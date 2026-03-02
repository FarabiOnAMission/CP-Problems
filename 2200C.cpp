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
    if(n==1){
      cout<<"NO"<<endl;
      continue;
    }
    stack<char>lastSeen;
    for(ll i=0;i<n;i++){
      if(!lastSeen.empty()){
      if(lastSeen.top()==s[i]){
        lastSeen.pop();
      }
      else{
        lastSeen.push(s[i]);
      }
    }
    else{
      lastSeen.push(s[i]);
    }
    }

    if(lastSeen.empty()){
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
}