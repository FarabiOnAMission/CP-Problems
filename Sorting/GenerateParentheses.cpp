#include<bits/stdc++.h>

using namespace std;
using ll=long long;

void fun(int n,vector<string>&ans,string &s,int i=0,int j=0)
{
    if(i==n && j==n)
    {
        ans.push_back(s);
        return;
    }

    if(i+1<=n)
    {
        s.push_back('(');
        fun(n,ans,i+1,j);
        s.pop_back();
    }

    if(j+1<=n && j+1<=i)
    {
        s.push_back(')');
        fun(n,ans,i,j+1);
        s.pop_back();
    }
}
