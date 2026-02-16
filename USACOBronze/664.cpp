#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  freopen("blocks.in", "r", stdin);
  freopen("blocks.out", "w", stdout);

  ll n;
  cin>>n;
  map<char,ll>final;
  while(n--){
    map<char,ll>blka,blkb;
    string a,b;
    cin>>a>>b;
    for(ll i=0;i<a.size();i++){
      blka[a[i]]++;
    }
    for(ll i=0;i<b.size();i++){
      blkb[b[i]]++;
    }

    for(char j='a';j<='z';j++)
      final[j]+=max(blka[j],blkb[j]);
  }

  for(char j='a';j<='z';j++)
      cout<<final[j]<<endl;

}