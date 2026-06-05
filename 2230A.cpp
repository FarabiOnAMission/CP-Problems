#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,a,b;
    cin>>n>>a>>b;
    ll person=n,cost=0;
    if(a*3>=b){
      cost+=(person/3) * b;
      person=person%3;
      cost+=min(person*a,b);

      cout<<cost<<endl;
    }
    else{
      cout<<person*a<<endl;
    }

  }
}