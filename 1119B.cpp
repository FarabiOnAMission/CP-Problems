#include<bits/stdc++.h>

using ll=long long;
using namespace std;

int main(){
  ll n,h;
  cin>>n>>h;
  vector<ll>v(n);
  for(ll i=0;i<n;i++) cin>>v[i];

  vector<ll>temp;
  ll ans=0;
  for(ll k=0;k<n;k++){
    ll sum=0;
    temp.push_back(v[k]);
    sort(temp.rbegin(),temp.rend());
    for(ll j=0;j<temp.size();j++){
      if(j%2==0) sum+=temp[j];
    }
    if(sum>h){
      cout<<k<<endl;
      return 0;
    }
  }

  cout<<n<<endl;
}