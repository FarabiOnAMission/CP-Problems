#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll a;
  while(cin>>a){
    if(a==0) break;
    else{
      long long tmp=sqrt(a);
      tmp*=tmp;
      if(tmp==a)
        cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
  }
}