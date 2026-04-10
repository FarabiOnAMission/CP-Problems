#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k;
  cin>>n>>k;
  ll arr[n];
  ll x,a,b,c;
  cin>>x>>a>>b>>c;
  arr[0]=x;
  for(ll i=1;i<n;i++){
    ll num = (a*(arr[i-1])+b)%c;
    arr[i]=num;
  }

  ll sum=0,sumxor=0;
  for(ll i=0;i<k;i++){
    sum+=arr[i];
  }
  sumxor=sum;
  for(ll i=k;i<n;i++){
    sum-=arr[i-k];
    sum+=arr[i];
    sumxor^=sum;
  }

  cout<<sumxor<<endl;
}