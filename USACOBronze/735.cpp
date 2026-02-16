#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  freopen("lostcow.in", "r", stdin);
  freopen("lostcow.out", "w", stdout);
  ll x,y;
  cin>>x>>y;
  if(x==y){
    cout<<0<<endl;
    return 0;
  }
  ll i=1,curr=x,dist=0,track=1,prev=0;
  if(x<y){
    while(true){
      if(track%2==1){
        prev=curr;
        curr=x+i;
        i*=2;
      }
      else{
        prev=curr;
        curr=x-i;
        i*=2;
      }
      if(prev<y && curr>=y){
        dist+=abs(prev-y);
        cout<<dist<<endl;
        return 0;
      }

      track++;
      dist+=abs(prev-curr);
    }
  }
  else{
    while(true){
      if(track%2==1){
        prev=curr;
        curr=x+i;
        i*=2;
      }
      else{
        prev=curr;
        curr=x-i;
        i*=2;
      }
      if(prev>y && curr<=y){
        dist+=abs(prev-y);
        cout<<dist<<endl;
        return 0;
      }

      track++;
      dist+=abs(prev-curr);
    }
  }
  cout<<dist<<endl;
}