#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    string s;
    cin>>n>>s;
    map<char,ll>freq;
    for(ll i=0;i<n;i++){
      freq[s[i]]++;
    }

    while(!freq.empty()){
      for(char c='a';c<='z';c++){
        if(freq[c]>0){
          cout<<c;
          freq[c]--;
        }
        if(freq[c]==0){
          freq.erase(c);
        }
      }
    }

    cout<<endl;

  }
}

/*
the points that come from equal characters are obvious, no matter where they are placed
they will always generate points

So to maximize the pleasant pairs I wont let the equal characters come together as much as possible,
so in that way i will get the good pairs point also have more chances of generating pleasant pairs
because these can get me points between unique and less frequency characters more
*/