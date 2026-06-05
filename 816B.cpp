#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll recipes[200005]={0},finalrecipes[200005]={0};

int main(){
  ll n,k,q;
  cin>>n>>k>>q;
  for(ll i=0;i<n;i++){
    ll l,r;
    cin>>l>>r;
    recipes[l]++;
    recipes[r+1]--;
  }
  for(ll i=1;i<200005;i++){
    recipes[i]+=recipes[i-1];
    finalrecipes[i]+=finalrecipes[i-1];
    if(recipes[i]>=k)
      finalrecipes[i]++;
  }

  for(ll i=1;i<=q;i++){
    ll a,b;
    cin>>a>>b;
    cout<<finalrecipes[b]-finalrecipes[a-1]<<endl;
  }

}