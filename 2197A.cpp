#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;       
    }
    return sum;
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x;
    cin>>x;
    ll c=0;
    for(ll i=x;i<=x+100;i++){
      if(i-digitSum(i)==x) c++;
    }
    cout<<c<<endl;
  }
}