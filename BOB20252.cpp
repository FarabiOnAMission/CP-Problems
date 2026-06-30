#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    string s;
    getline(cin,s);
    string a="ektu",b="jodi";
    size_t position1 = s.find(a);
    size_t position2 = s.find(b);

    if(position1!=string::npos || position2!=string::npos){
      cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
  }
}