#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll a,b;
  cin>>a>>b;
  ll d=b;
  ll k=10;
  while(d>=10){
    d/=10;
    k*=10;
  }

  ll t=a*k+b;
  ll x=sqrt(t);
  if(x*x==t)
    cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}