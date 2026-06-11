#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    ll matrix[n][m];
    ll max_value=-1;
    map<ll,ll>freq;
    pair<ll,ll>rc;
    for(ll i=0;i<n;i++){
      for(ll j=0;j<m;j++){
        cin>>matrix[i][j];
        if(matrix[i][j]>max_value){
          rc.first=i;
          rc.second=j;
          max_value = matrix[i][j];
        }
        freq[matrix[i][j]]++;
      }
    }

    ll cntmax = freq[max_value];
    ll cntmax1 = freq[max_value-1];
    
    if(cntmax==1){
      /*
      ll br=rc.first,bc=rc.second;
      ll temp_cnt=0;

      for(ll j=0;j<m;j++){
        if(matrix[br][j]==max_value-1){
          temp_cnt++;
        }
      }
      for(ll i=0;i<n;i++){
        if(matrix[i][bc]==max_value-1){
          temp_cnt++;
        }
      }

      if(temp_cnt==cntmax1){
        cout<<max_value-2<<endl;
      }
      else{
        cout<<max_value-1<<endl;
      }*/

      cout<<max_value-1<<endl;
    }
    else{
      bool f=false;
      ll cnt=0;
      ll col=rc.second;
      for(ll r=0;r<n;r++){
        if(matrix[r][col]==max_value) cnt++;
      }

      for(ll i=0;i<n;i++){
        ll temp=0;
        for(ll j=0;j<m;j++){
          if(j==col) continue;
          if(matrix[i][j]==max_value){
            temp++;
          }
        }
        if(temp+cnt==cntmax){
          f=true;
          break;
        }
      }
      cnt=0;
      ll row=rc.first;
      for(ll c=0;c<m;c++){
        if(matrix[row][c]==max_value) cnt++;
      }

      for(ll j=0;j<m;j++){
        ll temp=0;
        for(ll i=0;i<n;i++){
          if(i==row) continue;
          if(matrix[i][j]==max_value){
            temp++;
          }
        }
        if(temp+cnt==cntmax){
          f=true;
          break;
        }
      }

      if(f) cout<<max_value-1<<endl;
      else cout<<max_value<<endl;
    }
  }
}

/*

if max_value freq = 1 -----> Check if all max_value - 1 shares row or column with it -- if yes ans max_value - 2 else max_value-1
else{
go to position of the max_value -- check combination of ri and all other columns to get a L shape , 
first do the row operation 
then check the column operation ,
if after doing one column operation all of the max_values reduces to zero
then the ans is max_value - 1
else its max_value 
}
*/