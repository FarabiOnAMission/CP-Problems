#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=0,b=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4')
        {
            a++;
        }
        else if(s[i]=='7')
        {
            b++;
        }
    }

    if(a>b)
    {
        cout<<4<<endl;
    }
    else if(a<b)
    {
        cout<<7<<endl;
    }
    else
    {
        if(a==0 && b==0)
        {
            cout<<-1<<endl;
        }
        else
            cout<<4<<endl;
    }


}
