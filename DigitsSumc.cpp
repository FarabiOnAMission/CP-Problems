#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  if(n==10 || n==100 || n==1000 || n==10000 || n==100000)
    cout<<10<<endl;
  else{
    ll sum=0;
    while(n>0){
      sum+=(n%10);
      n/=10;
    }

    cout<<sum<<endl;
  }
}