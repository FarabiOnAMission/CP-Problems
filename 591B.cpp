#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n,m;
  cin>>n>>m;
  string s;
  cin>>s;
  map<char,vector<ll>>freq;
  for(ll i=0;i<n;i++){
    char c=s[i];
    freq[c].push_back(i);
  }
  vector<char>ans(n);
  while (m--) {
    char a, b;
    cin>>a>>b;
    if(a==b) continue; 
    swap(freq[a], freq[b]);
    /*else if(freq.count(a) && !freq.count(b)){
      freq[b]=freq[a];
      freq.erase(a);
    }
    else if(freq.count(b) && !!freq.count(a)){
      freq[a]=freq[b];
    }
    */
}
  for(auto x:freq){
    char c= x.first;
    vector<ll>vec= x.second;
    for(auto pos:vec){
      ans[pos]=c;
    }
  }
  for(ll i=0;i<ans.size();i++){
    cout<<ans[i];
  }
  cout<<endl;
}