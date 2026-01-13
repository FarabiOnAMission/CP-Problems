#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<s.size()-1;)
        {
            if(s[i]=='A' && s[i+1]=='B' || s[i]=='B' && s[i+1]=='B')
            {
                s.erase(s[i]);
                s.erase(s[i+1]);
                i+=2;
            }
            else
            {
                i+=1;
            }
        }

        cout<<s.size()<<endl;
    }

}
