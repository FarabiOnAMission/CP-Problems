#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;

    const int alpha= 26;

    vector<int> fpos(26,-1);
    vector<int> lpos(26,-1);
    vector<bool> act(26,false);

    for(int i=0;i<n;i++)
    {
        char c=s[i];
        int pos=c-'A';

        if(fpos[pos]==-1)
        {
            fpos[pos]=i;
        }
        lpos[pos]=i;

    }

    for(int i=0;i<n;i++)
    {
        char c=s[i];
        int pos=c-'A';
        if(i==fpos[pos])
            act[pos]=true;

        int count=0;
        for(int j=0;j<26;j++)
        {
            if(act[j]==true)
                count++;
        }
        if(count>k)
        {
            cout<<"YES"<<endl;
            return 0;
        }

        if(i==lpos[pos])
        {
            act[pos]=false;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
