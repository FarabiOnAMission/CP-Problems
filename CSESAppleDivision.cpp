#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<ll>v;
ll n,sum;

ll solve(ll i,ll curr_sum){

  if(i==n-1){
    ll other_sum = sum-curr_sum;
    return abs(curr_sum-other_sum);
  }

  return min(solve(i+1,curr_sum+v[i+1]),solve(i+1,curr_sum));
}

int main(){
  cin>>n;
  v.assign(n,0);
  for(ll i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
  }

  cout<<solve(0,0)<<endl;
}