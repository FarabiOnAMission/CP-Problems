#include<bits/stdc++.h>

using namespace std;
using ll=long long;
const ll N = 1299720;
vector<bool>prime(N,true);

int main(){
  ll n;
  cin>>n;
  prime[0]=prime[1]=false;
  for(ll i=2;i<=N;i++){
    if(prime[i] && i*i<=N){
      for(ll j=i*i;j<=N;j+=i){
        prime[j]=false;
      }
    }
  }

  ll cnt=0;
  for(ll i=0;i<=N;i++){
    if(prime[i]){
      cout<<i<<' ';
      cnt++;
    }
    if(cnt==n) break;
  }
  cout<<'\n';
}

/*
this problem is easy as the 1e5th prime number is less that 1e7
so we can just give all the prime numbers
*/