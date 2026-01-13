#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const ll m=1e9+7;

ll mod_add(ll a,ll b){
  return (a%m + b%m)%m;
}

ll mod_sub(ll a,ll b){
  return (a%m - b%m +m)%m;
}

ll mod_mul(ll a,ll b){
  return (a%m * b%m)%m;
}

//a^b
ll mod_expo(ll a,ll b){
  if(b==0) return 1;
  ll res=mod_expo(a,b/2);
  res=mod_mul(res,res);
  if(b%2==1) res=mod_mul(res,a);
  return res;
}

ll mod_inv(ll a,ll mod){
  return mod_expo(a,m-2);
}

ll mod_div(ll a,ll b){
  return mod_mul(a,mod_inv(b,m));
}


int main(){

}