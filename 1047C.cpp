#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const int MAXN= 15000005;
int spf[MAXN];
int primeCount[MAXN];
vector<int>pr;

int mx=0;

void sieve(){
  for(int i=2;i<MAXN;i++){
    if(spf[i]==0){
      spf[i]=i;
      pr.push_back(i);
    }

    for(int j=0;j<pr.size() && i*pr[j]<MAXN;j++){
      spf[i*pr[j]]=pr[j];

      if(spf[i]==pr[j]){
        break;
      }
    }
  }
}

void countFactors(int primeCount[],int x){
  while(x>1){
    int p=spf[x];
    primeCount[p]++;
    mx=max(mx,primeCount[p]);
    while(x%p==0){
    x/=p;
    }
  }
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  sieve();
  int n;
  cin>>n;
  int v[n];
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  int g=v[0];

  for(int i=1;i<n;i++){
    g=__gcd(g,v[i]);
  }
  for(int i=0;i<n;i++){
    if(g>1){
    v[i]/=g;
    }
  }
  for(int i=0;i<n;i++){
    countFactors(primeCount,v[i]);
  } 


  if(mx==0) cout<<-1<<endl;
  else cout<<n-mx<<endl;

}