#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,d,h;
    cin>>n>>d>>h;
    vector<ll>y(n);
    for(ll i=0;i<n;i++) cin>>y[i];
    double area = 0.0;
    for(ll i=0;i<n-1;i++){
      ll h_prime = y[i+1]-y[i];
      if(h_prime >= h){
        double rec = (d*1.0)*h;
        area += 0.5 * rec;
      }
      else{
        ll up = (d)*(h-h_prime);
        double d_top = (up * 1.0)/h;
        area += 0.5 * (d+d_top) * h_prime;
      }
    }
    area += 0.5*d*h;
    cout<<fixed<<setprecision(7)<<area<<"\n";
  }
}