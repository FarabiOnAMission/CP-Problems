#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

    ll w,h,d,n;
    cin>>w>>h>>d>>n;
    ll g=gcd(n,w);
    n/=g;
    ll c1=g;
    g=gcd(n,h);
    n/=g;
    ll c2=g;
    g=gcd(n,d);
    ll c3=g;
    n/=g;
    if(n!=1){
      cout<<-1<<endl;
    }
    else  cout<<c1-1<<' '<<c2-1<<' '<<c3-1<<endl;

  }