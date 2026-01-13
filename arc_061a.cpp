#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
  string s;
  cin>>s;
  ll sz=s.size()-1;
  ll sum=0;

  for(ll mask=0;mask<(1LL<<sz);mask++){
    ll cur=0;
    ll cursegment=0;
    for(ll j=0;j<=sz;j++){
      cursegment= cursegment*10 + (s[j]-'0');

      if(j==sz || (1LL<<j)&mask){
        cur+=cursegment;
        cursegment=0;
      }
    }
    sum+=cur; 
  }

  cout<<sum<<endl;
}