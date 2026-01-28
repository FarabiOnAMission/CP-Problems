#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  double sum=0;
  ll k=n;
  while(k>1){
    sum+=1/(k*1.0);
    k--;
  }

  sum+=1;
  cout<<setprecision(7)<<fixed<<sum<<endl;
}