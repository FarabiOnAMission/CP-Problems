#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    string s;
    cin>>s;
    ll n=s.size();
    string word;
    set<ll>c;
    for(ll i=n-1;i>=0;i--)
    {
        word+=s[i];
        c.insert(s[i]);
    }

    if(word==s){
        if(c.size()==1)
            cout<<0<<endl;
        else
            cout<<n-1<<endl;
    }
    else
        cout<<n<<endl;
}
