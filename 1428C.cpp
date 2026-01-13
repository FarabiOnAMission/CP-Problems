#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    int stc=0;
    for(int i=0;i<s.size();i++)
    {
        if(stc && s[i]=='B')
            stc--;
        else
            stc++;
    }

    cout<<stc<<endl;

    }

}
