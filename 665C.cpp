#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  
    string s;
    cin>>s;
    ll n=s.size();
    vector<char>ch={'a','b','c'};
    for(ll i=0;i<n-1;i++){
      if(s[i]==s[i+1]){
        for(ll j=0;j<ch.size();j++){
          if(i+2<n){
            if(ch[j]!=s[i] && ch[j]!=s[i+2]){
              s[i+1]=ch[j];
            }
            }
            else{
              if(ch[j]!=s[i]){
                s[i+1]=ch[j];
              }
            }
          }
        }
      }

      cout<<s<<endl;
    }