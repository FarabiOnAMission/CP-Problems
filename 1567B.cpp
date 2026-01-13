#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b;
    cin>>a>>b;
    ll x;
   if(a%4==1) x=a-1;
   else if(a%4==2) x=1;
   else if(a%4==3) x=a;
   else x=0; 

    if(x==b)
      cout<<a<<endl;
    else{
      ll y=x^b;
      if(y!=a)
        cout<<a+1<<endl;
      else
        cout<<a+2<<endl;
    }
  }
}