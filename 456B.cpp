#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  string s;
  cin>>s;
  ll l=s.size();
  ll last2=  (l==1)? (s[l-1]-'0'): (stoi(s.substr(l-2)));
  if(last2%4==0) cout<<4<<endl;
  else cout<<0<<endl;
}