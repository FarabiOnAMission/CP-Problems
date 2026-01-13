#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int z=0,o=0;
        string s;
        cin>>s;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                z++;
            }
            else
                o++;
        }

            int to=min(z,o);
            if(to%2!=0)
            {
                cout<<"DA"<<endl;
            }
            else
                cout<<"NET"<<endl;

        }
    }
