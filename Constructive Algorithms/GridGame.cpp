#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    string s;
    cin>>s;
    ll v=0,h=0;
    ll n=s.size();

    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            cout<<2<<' '<<v+1<<endl;
            v=(v+1)%4;
        }
        else{
            cout<<1<<' '<<h+1<<endl;
            h=(h+2)%4;
        }
    }
}
