#include<bits/stdc++.h>
using namespace std;
using ll=long long;

//sieve of erathosthesis
vector<bool> sieve(ll n){
  vector<bool>prime(n,1);
  prime[0]=prime[1]=0;
  for(ll i=2;i*i<n;i++){
    if(prime[i]){
    for(int j=i*i;j<n;j+=i)
      prime[j]=0;
    }
  }
}

int main(){

  ll n;
  cin>>n;
  //-----------------------//
  //Smallest Prime Factor
  vector<ll>spf(n+1,-1);
  for(ll i=2;i<=n;i++){
    if(spf[i]==-1){
    for(ll j=i;j<=n;j+=i){
      if(spf[j]==-1){
        spf[j]=i;
      }
    }
  }
  }

  //Prime Factor
  ll x=n;
  while(x>1){
    cout<<spf[x]<<' ';
    x/=spf[x];
  }
  cout<<endl;
  //-------------------//
  for(auto v:spf)
    cout<<v<<' ';
}