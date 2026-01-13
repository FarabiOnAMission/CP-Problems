#include<bits/stdc++.h>

using namespace std;
using ll=long long;

    string s1="12",s2="123",s3="1234";
    vector<string>two,three,four;
    void solve(){
    string temp1 = "12";
    do { two.push_back(temp1); } while(next_permutation(temp1.begin(), temp1.end()));
    string temp2 = "123";
    do { three.push_back(temp2); } while(next_permutation(temp2.begin(), temp2.end()));
    string temp3 = "1234";
    do { four.push_back(temp3); } while(next_permutation(temp3.begin(), temp3.end()));
  }

int main(){
  ll t;
  cin>>t;
  solve();
  while(t--){
    string a;
    ll l,r;
    cin>>a>>l>>r;
    string comp1,comp2;
    if (a == "12") { comp1 = two[l-1]; comp2 = two[r-1]; }
    else if (a == "123") { comp1 = three[l-1]; comp2 = three[r-1]; }
    else { comp1 = four[l-1]; comp2 = four[r-1]; } 
    ll B=comp1.size(),A=0;
    for(ll i=0;i<comp1.size();i++){
      if(comp1[i]==comp2[i]){
        A++;
        B--;
      }
    }
    cout<<A<<"A"<<B<<"B"<<endl;
  }
}