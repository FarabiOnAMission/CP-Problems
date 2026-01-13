#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x,y;
    cin>>x>>y;
    if(y==1)
      cout<<-1<<endl;
    else if(x<y)
      cout<<2<<endl;
    else if(x-y>1)
      cout<<3<<endl;
    else
      cout<<-1<<endl;
    }
  }
