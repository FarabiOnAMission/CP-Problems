#include<bits/stdc++.h>

using namespace std;
using ll=long long;


ll arr[200006]={0};

ll digitExtractor(ll number){
    ll sum=0;
    while(number>0){
      ll rem=number%10;
      number/=10;
      sum+=rem;
    }

    return sum;
}


int main(){
  
  for(ll i=1;i<=200005;i++){
    arr[i]=arr[i-1]+digitExtractor(i);
  }

  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    cout<<arr[n]<<endl;
  }
}