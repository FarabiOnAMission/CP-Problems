#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0;

    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
            c++;
    }

    if(c==s.size())
    {
        s[0]=toupper(s[0]);
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }

        cout<<s<<endl;
    }
    else if(c==s.size()-1 && islower(s[0]))
    {
        s[0]=toupper(s[0]);
        for(int i=1;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }

        cout<<s<<endl;

    }
    else
        cout<<s<<endl;


}
