#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    long long s1=a.size();
    long long s2=b.size();
    //vector<char>v;
    unordered_map<char,int>ump;
    unordered_map<char,int>a1;
    unordered_map<char,int>a2;

    for(long long i=0;i<s1;i++)
    {
        a1[a[i]]++;
    }

    for(long long i=0;i<s2;i++)
    {
        a2[b[i]]++;
    }

    for(char ch = 'a'; ch <= 'z'; ++ch)
    {
        ump[ch]=max(a1[ch],a2[ch]);
    }

    for(char ch = 'a'; ch <= 'z'; ++ch)
    {
        for(long long i=0;i<ump[ch];i++)
        {
            cout<<ch;
        }
    }

    cout<<endl;



}
