#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m,k;
  cin>>n>>m>>k;
  if(2*n*m%k!=0){
    cout<<"NO"<<endl;
    return 0;
  }
  cout<<"YES"<<endl;
  if(2*m%k==0){
    cout<<0<<' '<<0<<endl;
    cout<<n<<' '<<0<<endl;
    cout<<0<<' '<<2*m/k<<endl;
    return 0;
  }
  if(2*n%k==0){
    cout<<0<<' '<<0<<endl;
    cout<<2*n/k<<' '<<0<<endl;
    cout<<0<<' '<<m<<endl;
    return 0;
  }

  ll g=__gcd(2*n,k);
  cout<<0<<' '<<0<<endl;
  cout<<2*n/g<<' '<<0<<endl;
  cout<<0<<' '<<m*g/k<<endl;
}