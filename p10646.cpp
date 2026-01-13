#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        vector<string>v;
        deque<string>d1;
        deque<string>d2;
        for(int i=0;i<25;i++)
        {
            string s;
            cin>>s;
            d1.push_front(s);
        }

        for(int i=0;i<27;i++)
        {
            string s;
            cin>>s;
            d2.push_front(s);
        }
        int c=0;
        for(int i=0;i<3;i++)
        {
            string s=d1.front();
            int n;
            if(s[0]=='A' || s[0]=='K' || s[0]=='J' || s[0]=='Q' || s[0]=='T')
            {
                 n=10;
            }
            else
            {
                n=s[0]-'0';
            }
            c+=n;
            d1.pop_front();
            for(int i=0;i<(10-n);i++)
            {
                d1.pop_front();
            }
        }

        while(!d1.empty())
        {
            string s=d1.back();
            v.push_back(s);
            d1.pop_back();
        }

        while(!d2.empty())
        {
            string s=d2.back();
            v.push_back(s);
            d2.pop_back();
        }

        cout<<"Case "<<j<<": ";
        cout<<v[c-1]<<endl;

    }
}
