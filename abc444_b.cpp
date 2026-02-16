#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {

        int last = n % 10;
        sum += last;
        n /= 10;
    }
    return sum;
}


int main(){
  ll n,k;
  cin>>n>>k;
  ll c=0;
  for(ll i=1;i<=n;i++){
    if(sumOfDigits(i)==k){
      c++;
    }
  }
  cout<<c<<endl;
}