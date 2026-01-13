#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0' && c==0)
        {   
            c=1;
            s.erase(i,1);
            break;
        }
    }

    if(c==1)
    {
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i];
        }
    }
    else
    {
        for(int i=0;i<s.size()-1;i++)
        {
            cout<<s[i];
        }
    }

    return 0;
}