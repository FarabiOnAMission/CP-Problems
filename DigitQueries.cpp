#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
  ll n;
  cin>>n;
  ll c=9, track=0;
  ll length=1;
  while(true){
    if(n>length*c){
      n-=length*c;
      track+=c;
    }
    else{
      ll dive=(n-1)/length;
      track+= dive;
      n-=dive*length;

      ll ans=track+1;

      string s=to_string(ans);
      cout<<s[n-1]<<endl;
      break;
    }
    c*=10;
    length++;
  }
}
}