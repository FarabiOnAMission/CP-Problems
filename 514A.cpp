#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_map<char,char>ump={{'5','4'},{'6','3'},{'7','2'},{'8','1'},{'9','0'}};
    for(long long i=0;i<s.size();i++)
    {
        if(s[i]=='9' && i==0)
            {
                cout<<s[i];
                continue;
            }
        if(ump.count(s[i]))
        {
            cout<<ump[s[i]];
        }
        else
            cout<<s[i];
    }
}
