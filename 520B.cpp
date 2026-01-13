#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  ll c=0;
  if(n>=m){
    cout<<(n-m)<<endl;
    return 0;
  }
  else{
    while(m>n){
      if(m%2==0){
        m/=2;
        c++;
      }
      else{
        m++;
        c++;
      }
    }
    c+=(n-m);
    cout<<c<<endl;
  }

}