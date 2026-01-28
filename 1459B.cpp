#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  ll k=n/2;
  if(n%2==0){
    ll x=(k+1)*(k+1);
    cout<<x<<endl;
  }
  else{
    ll y=(k+1)*(k+2);
    cout<<2*y<<endl;
  }
}