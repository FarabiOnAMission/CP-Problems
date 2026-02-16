#include<bits/stdc++.h>

using namespace std;
using ll=long long;
    char arr[3][3];
    set<char>single;
    set<set<char>>team;

    void check(char a,char b,char c){
      set<char>s;
      s.insert(a);
      s.insert(b);
      s.insert(c);

      if(s.size()==1) single.insert(a);
      else if(s.size()==2){
        team.insert(s);
      }
    }

int main(){
  freopen("tttt.in", "r", stdin);
  freopen("tttt.out", "w", stdout);
  for(ll i=0;i<3;i++){
    for(ll j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }

  for(ll i=0;i<3;i++){
    check(arr[i][0],arr[i][1],arr[i][2]);
  }

  for(ll j=0;j<3;j++){
    check(arr[0][j],arr[1][j],arr[2][j]);
  }

  check(arr[0][0],arr[1][1],arr[2][2]);
  check(arr[2][0],arr[1][1],arr[0][2]);

  cout<<single.size()<<endl;
  cout<<team.size()<<endl;

}