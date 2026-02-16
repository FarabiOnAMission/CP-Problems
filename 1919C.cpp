#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,penalty=0;
    cin>>n;
    vector<ll>pa,pb,arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll mxa=LLONG_MAX,mxb=LLONG_MAX;

    for(ll i=0;i<n;i++){
      if(arr[i]<=mxa && arr[i]<=mxb){
        if(mxa>mxb){
          pb.push_back(arr[i]);
          mxb=arr[i];
        }
        else{
          pa.push_back(arr[i]);
          mxa=arr[i];
        }
      }
      else if(arr[i]<=mxa){
        pa.push_back(arr[i]);
        mxa=arr[i];
      }
      else if(arr[i]<=mxb){
        pb.push_back(arr[i]);
        mxb=arr[i];
      }
      else{
        if(mxa<mxb){
          pa.push_back(arr[i]);
          mxa=arr[i];
        }
        else{
          pb.push_back(arr[i]);
          mxb=arr[i];
        }
      }
    }

    for(ll i=1;i<pa.size();i++){
      if(pa[i]>pa[i-1]){
        penalty++;
      }
    }

    for(ll i=1;i<pb.size();i++){
      if(pb[i]>pb[i-1]){
        penalty++;
      }
    }

    cout<<penalty<<endl;
  }
}