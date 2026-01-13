#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll a,b,c;
  cin>>a>>b>>c;
  ll g=0;

  if(a==b && b==c && a%2==0){
    cout<<-1<<endl;
    return 0;
  }

  while(a%2==0 && b%2==0 && c%2==0){
    ll tempa=b/2 + c/2;
    ll tempb=a/2 + c/2;
    ll tempc=a/2 + b/2;
    a=tempa;
    b=tempb;
    c=tempc;

    g++;

    if(a==b && b==c && a%2==0){
    cout<<-1<<endl;
    return 0;
  }

  }

  cout<<g<<endl;

}