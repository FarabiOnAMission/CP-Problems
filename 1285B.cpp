#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll maxsubarraysum(vector<ll>&arr){
  ll res=arr[0];
  ll maxend=arr[0];
  ll l=0,r=1;

  for(ll i=1;i<arr.size()-1;i++){
    
    maxend=max(arr[i],maxend+arr[i]);
    res= max(res,maxend);
  }

  ll res2=arr[1];
  ll maxend2=arr[1];

  for(ll i=2;i<arr.size();i++){
    
    maxend2=max(arr[i],maxend2+arr[i]);
    res2= max(res2,maxend2);
  }

  return max(res,res2);
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      sum+=v[i];
    }
    ll come=maxsubarraysum(v);

    if(come<sum){
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
}