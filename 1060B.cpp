#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  ll x=n;

  if(x/10==0){
    cout<<x<<endl;
    return 0;
  }

  ll cnt=0;
  while(x>=1){
    cnt++;
    x/=10;
  }

  ll cntb=cnt-1;
  ll a=0;
  for(int i = 0;i<cntb;i++){
      a = a * 10 + 9;
  }
  ll g=cntb*9;
  n-=a;

  while(n>=1){
    ll digit=n%10;
    g+=digit;
    n/=10;
  }

  cout<<g<<endl;
}