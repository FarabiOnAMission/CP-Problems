#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b;
    string s;
    cin>>a>>b>>s;
    
    ll c1=a,c2=b,n=s.size(),c3=0;

    

    for(ll i=0;i<(n+1)/2;i++){
      ll cost= (i==n-i-1)?1:2;

      if(s[i]=='0'){
        if(s[i]==s[n-i-1]){
          c1-=cost;;
        }
      }
      else if(s[i]=='1'){
        if(s[i]==s[n-i-1]){
          c2-=cost;
        }
      }

      if((s[i]=='0' && s[n-i-1]=='?') || (s[i]=='?' && s[n-i-1]=='0')){
        c1-=cost;
        c3--;
        s[i]=s[n-i-1]='0';
      }
      else if((s[i]=='1' && s[n-i-1]=='?') || (s[i]=='?' && s[n-i-1]=='1')){
        c2-=cost;
        c3--;
        s[i]=s[n-i-1]='1';
      }

    }

    for(ll i=0;i<(n+1)/2;i++){
      ll cost= (i==n-i-1)?1:2;
      if(s[i]=='?' && s[n-i-1]=='?'){
        if(c1>=cost){
          c1-=cost;
          s[n-i-1]=s[i]='0';
        }
        else if(c2>=cost){
          c2-=cost;
          s[n-i-1]=s[i]='1';
        }
      }

      if(c1<0 || c2<0){
        break;
      }

    }

    if(c1==0 && c2==0){
      cout<<s<<endl;
    }
    else cout<<-1<<endl;
  }
}


/*
4 4 
01?????0
01?????0 / c1=2,c2=4
01????10 /c1=2,c2=2

3 3

*/