#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll>v(n);
    ll s=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
    }

    ll p1=(s+n-1)/n;
    ll p2=s/n;
    ll d1=0;
    ll d2=0;

    for(ll i=0;i<n;i++){
      ll t1=p1-v[i];
      ll t2=p2-v[i];
      d1+=(t1*t1);
      d2+=(t2*t2);
    }

    cout<<min(d1,d2)<<endl;

}
