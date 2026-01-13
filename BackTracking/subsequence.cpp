#include<bits/stdc++.h>

using namespace std;
using ll=long long;

void generate(ll i,vector<ll> &vec, ll n,ll arr[]){
  if(i==n){
    for(auto it: vec){
      cout<<it<<' ';
    }
    cout<<endl;
    return;
  }
  
  vec.push_back(arr[i]);
  generate(i+1,vec,n,arr);

  vec.pop_back();
  generate(i+1,vec,n,arr);
}


int main(){
ll n;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++){
  cin>>arr[i];
}
vector<ll>vec;
generate(0,vec,n,arr);
}