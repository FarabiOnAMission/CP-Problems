#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll sumOfDigits(ll x){
  ll sum=0;
  while(x>0){
    ll rem=x%10;
    x/=10;
    sum+=rem;
  }

  return sum;
}

int main(){
  ll n;
  cin>>n;
  ll no=n;
  ll div=sumOfDigits(no);
  if(n%div==0){
    cout<<"Yes"<<endl;
  }
  else cout<<"No"<<endl;
}