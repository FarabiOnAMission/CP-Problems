#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll convert(ll x){
  ll sum=0;
  while(x>0){
    ll k=x%10;
    sum+=k;
    x/=10;
  }

  return sum;
}


int main(){
  ll n;
  cin>>n;

  ll sum=1;
  for(ll i=1;i<n;i++){

    sum+=convert(sum);
  }

  cout<<sum<<endl;
}