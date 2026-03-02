#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll a,b,c,d;
  cin>>a>>b>>c>>d;

  if(c>=a){
    if(d>=b){
      cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;
  }
  else cout<<"No"<<endl;
}