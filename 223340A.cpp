#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    string s;
    cin>>s;
    ll n=s.size();

    for(ll i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){

         if(s[i]=='?')
                s[i]=s[n-i-1];
         else if(s[n-i-1]=='?')
                s[n-i-1]=s[i];
         else{
            cout<<-1<<endl;
            return 0;
         }
        }

        if(s[i]=='?' && s[n-i-1]=='?'){
            s[i]='a';
            s[n-i-1]='a';
        }

    }

    if(n%2==1 && s[n/2]=='?')
        s[n/2]='a';

    cout<<s<<endl;
}
