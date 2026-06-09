#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    map<char,ll>freq;
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(char c='a';c<='z';c++){
      freq[c]=0;
    }
    
    for(char c='A';c<='Z';c++){
      freq[c]=0;
    }
    
    ll cnt=0;

    for(ll i=0;i<s.size();i++){
      freq[s[i]]++;
      if(islower(s[i])){
        char b=toupper(s[i]);
        if(freq[b]>0){
          freq[b]--;
          freq[s[i]]--;
          cnt++;
        }
      }
      else{
        char b=tolower(s[i]);
        if(freq[b]>0){
          freq[b]--;
          freq[s[i]]--;
          cnt++;
        }
      }
    }

    for(auto x:freq){
      ll a1 = x.first;
      ll a2 = x.second;
      if(a2>=2 && k>0){
        cnt+=(min(k,a2/2));
        k-=min(a2/2,k);
      }
    }
    cout<<cnt<<endl;
  }
}

/*

aAaaBACacbE
perl = 2
a = 2
*/

//Subtle bug: didnt add the character to the freq array in the first place before decrementing
