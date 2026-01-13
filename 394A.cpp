#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  string s;
  cin>>s;
  bool flag1=false;
  bool flag2=false;
  ll c1=0,c2=0,c3=0;
  ll sz=s.size();
  for(ll i=0;i<sz;i++){
    if(s[i]=='='){
      flag1=true;
    }
    if(s[i]=='+') flag2=true;
    if(flag1) {
      if(s[i]=='|') c3++;
    }
    else{
      if(flag2){
      if(s[i]=='|') c2++;
    }
      else {
        if(s[i]=='|') c1++;
      }
  }
  }

  ll z=abs((c1+c2)-c3);
  if(z!=0 && z!=2) cout<<"Impossible"<<endl;
  else{
    if(c1+c2==c3) cout<<s<<endl;
    else{
        if(c1+c2<c3){
          c3--;
          c1++;
          for(ll i=0;i<c1;i++) cout<<'|';
          cout<<'+';
          for(ll i=0;i<c2;i++) cout<<'|';
          cout<<'=';
          for(ll i=0;i<c3;i++) cout<<'|';
          cout<<endl;
        }
        else{
          c3++;
          if(c1>1) c1--;
          else c2--;
          for(ll i=0;i<c1;i++) cout<<'|';
          cout<<'+';
          for(ll i=0;i<c2;i++) cout<<'|';
          cout<<'=';
          for(ll i=0;i<c3;i++) cout<<'|';
          cout<<endl;
        }
      }
    }
  }