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
    char c=s[0];
    char result='z'+1;
    ll idx=-1;
    for(ll i=n-1;i>0;i--){
      if(s[i]<result){
        result=s[i];
        idx=i;
      }
    }

    if(result>s[0]){
      cout<<s<<endl;
    }
    else{
      s.erase(s.begin()+idx);
      s.insert(s.begin(),result);
      cout<<s<<endl;
    }
  }
}