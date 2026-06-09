#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    if(a1==0){
      cout<<1<<endl;
      continue;
    }
    ll Alice=0,Bob=0,total=0;
    total+= a1 + min(a2,a3)*2;
    Alice=Bob=a1;
    ll temp1=a2,temp2=a3;
    a2 = max(0LL, temp1-temp2);
    a3 = max(0LL,temp2-temp1);
    ll diff = abs(a2-a3) + a4;
    ll tot = a1 + 1;

    cout<< total + min(diff,tot)<<endl;
  }
}