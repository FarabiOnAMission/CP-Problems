#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int tc;
    cin>>tc;
    int len;
    vector <string> store;

    for(int i=0;i<tc;i++)
    {
        int count=0;
        cin>>len;
        cin>>s;
        for(int j=0;j<len;j++)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                count=0;
            }
            else
            {
                count = count + 1;
            }
        if(count>=4)
            break;
        }

        if(count>=4)
        {
            store.push_back("NO");
        }
        else
            store.push_back("YES");
    }

    for(int i=0;i<store.size();i++)
    {
        cout<<store[i]<<endl;
    }

}
