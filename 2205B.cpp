#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<ll> primeFactorization(ll n) {
    vector<ll> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    for (ll i = 3;i*i<=n;i+=2) {
        while (n%i == 0) {
            factors.push_back(i);
            n/= i;
        }
    }
    if (n>2) {
        factors.push_back(n);
    }
    
    return factors;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    set<ll>s;
    vector<ll>factor = primeFactorization(n);
    for(ll i=0;i<factor.size();i++){
      s.insert(factor[i]);
    }
    ll k=1;
    for(auto x:s){
      k=k*x;
    }

    cout<<k<<endl;
  }
}