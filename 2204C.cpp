#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    ll c_alice=0,c_bob=0,c_carol=0;
    ll ab=lcm(a,b),bc=lcm(b,c),ca=lcm(a,c),abc=lcm(lcm(a,b),c);
    c_alice=(m/a - m/ab - m/ca + m/abc)*6 + (m/ab + m/ca - 2*(m/abc))*3 +  (m/abc)*2;
    c_bob=(m/b - m/bc - m/ab + m/abc)*6 + (m/ab + m/bc - 2*(m/abc))*3 +  (m/abc)*2;
    c_carol=(m/c - m/bc - m/ca + m/abc)*6 + (m/bc + m/ca - 2*(m/abc))*3 +  (m/abc)*2;

    cout<<c_alice<<' '<<c_bob<<' '<<c_carol<<endl;
  }
}