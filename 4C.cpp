#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    unordered_map<string,int>ump;
    while(t--)
    {
        string s;
        cin>>s;
        if(ump.find(s)==ump.end())
        {
        cout<<"OK"<<endl;
        ump[s]=1;
        }
        else
        {
            cout<<s<<ump[s]<<endl;
            ump[s]++;
        }
    }
}
