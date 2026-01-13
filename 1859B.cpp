#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll sum=0,minall=LLONG_MAX,min2all=LLONG_MAX;
    while(n--)
    {
      ll k;
      cin>>k;
      vector<ll>a(k);
      ll min1=LLONG_MAX,min2=LLONG_MAX;
      for(ll i=0;i<k;i++) cin>>a[i];
      
      for(ll i=0;i<k;i++){
        if(a[i]<min1){
          min2=min1;
          min1=a[i];
        }
        else if(a[i]<min2) min2=a[i];
      }

      minall=min(minall,min1);
      min2all=min(min2all,min2);
      sum+=min2;
    }    

    cout<<sum-min2all+minall<<endl;
  }


}