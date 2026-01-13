#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  string a,b;
  cin>>a>>b;
  ll cntqsn=0;
  ll k=a.size();
  for(ll i=0;i<k;i++){
    if(b[i]=='?') cntqsn++;
  }


  ll scorea=0;
  for(ll i=0;i<k;i++){
    if(a[i]=='+') scorea++;
    else scorea--;
  }

    ll scoreb=0;
  for(ll i=0;i<k;i++){
    if(b[i]=='+')
      scoreb++;
    else if(b[i]=='-') scoreb--;
  }   
  
  if(cntqsn==0){
    if(scoreb==scorea) cout<<fixed<<setprecision(12)<<1.0<<endl;
    else cout<<fixed<<setprecision(12)<<0.0<<endl;

    return 0;
  }

  ll totalevent=(1LL<<cntqsn);
  ll gotevent=0;

  for(ll mask=0;mask<(totalevent);mask++){
    ll scoreb=0;
    ll qsn=0;
    for(ll j=0;j<k;j++){
      if(b[j]=='+') scoreb++;
      else if(b[j]=='-') scoreb--;
      else{
        if(mask&(1<<qsn)) scoreb++;
        else scoreb--;
        qsn++;
      }
    }

    if(scoreb==scorea) gotevent++;
  }

  long double probab=(gotevent*1.0)/totalevent;

  cout<<fixed<<setprecision(12)<<probab<<endl;
}