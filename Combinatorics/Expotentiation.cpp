#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll pow(ll a,ll b){
  if(b==0){
    return 1; 
  }
  if(b%2==0){
    ll x= pow(a,b/2);
    return x*x;
  }
  else if(b%2==1){
  ll x= pow(a,b/2);
  return x*x*a;
  }
}

int main(){

}