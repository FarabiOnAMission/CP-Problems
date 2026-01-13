#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll m,s;
  cin>>m>>s;
  if(s==0){
    if(m==1) cout<<"0 0"<<endl;
    else cout<<"-1 -1"<<endl;

    return 0;
  }

  if(s>9*m){
    cout<<-1<<' '<<-1<<endl;
    return 0;
  }

  string mx,mn;
  ll t=s;
  for(ll i=0;i<m;i++){
    for(ll j=9;j>=0;j--){
      ll rem_s=t-j;
      if(rem_s>=0){
        t-=j;
        mx+=j+'0';
        break;
      }
    }
  }

  t=s;
  for(ll i=0;i<m;i++){
    for(ll j=0;j<=9;j++){
      if(i==0 && j==0) continue;
      ll rem_s=s-j;
      if(rem_s<=(m-i-1)*9){
        s-=j;
        mn+=j+'0';
        break;
      }
    }
  }

  cout<<mn<<' '<<mx<<endl;
}