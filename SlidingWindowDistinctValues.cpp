#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k;
  cin>>n>>k;
  map<ll,ll>freq;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++) cin>>arr[i];
  for(ll i=0;i<n;i++){
    freq[arr[i]]++;

    if(i-k+1<0){
      continue;
    }
    else{
      cout<<freq.size()<<' ';

      if(freq[arr[i-k+1]]==1){
        freq.erase(arr[i-k+1]);
      }
      else{
        freq[arr[i-k+1]]--;
      }
    }
  }

  cout<<endl;
}