#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  ll x=n-2;
  if(x%3==0){
    cout<<1<<' '<<2<<' '<<x-1<<endl;
  }
  else{
    cout<<1<<' '<<1<<' '<<x<<endl;
  }
}