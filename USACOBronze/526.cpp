#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  freopen("censor.in", "r", stdin);
  freopen("censor.out", "w", stdout);
  string s,t;
  cin>>s>>t;
  string word="",temp="";
  for(ll i=0;i<s.size();i++){
    word+=s[i];

    if(word.size()>=t.size()){
      if(word.substr(word.size()-t.size())==t){
        word.resize(word.size()-t.size());
      }
    }
  }

  cout<<word<<endl;
}