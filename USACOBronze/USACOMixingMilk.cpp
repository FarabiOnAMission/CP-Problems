#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  freopen("mixmilk.in","r",stdin);
  freopen("mixmilk.out","w",stdout);

  ll c1,m1,c2,m2,c3,m3;
  cin>>c1>>m1>>c2>>m2>>c3>>m3;
  ll c=1;
  while(c<=100){
    if(c%3==1){
      ll curr=min(m1,c2-m2);
      m1-=curr;
      m2+=curr;
    }
    else if(c%3==2){
      ll curr = min(m2,c3-m3);
      m2-=curr;
      m3+=curr;
    }
    else{
      ll curr = min(m3,c1-m1);
      m3-=curr;
      m1+=curr;
    }
    c++;
  }

  cout<<m1<<endl<<m2<<endl<<m3<<endl;
}