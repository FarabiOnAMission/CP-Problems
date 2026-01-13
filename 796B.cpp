#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> s(m,0);
    for(long long i=0;i<m;i++)
    {
        cin>>s[i];
    }

    long long a,b;
    vector<long long> s1(k,0);
    vector<long long> s2(k,0);
    long long bp=1;
    long long c=0;

    for(long long i=0;i<k;i++)
    {
        cin>>s1[i]>>s2[i];
    }

    for(long long i=0;i<k;i++)
    {
        if(s1[i]==bp)
        {
            bp=s2[i];
        }

        else if(s2[i]==bp)
        {
            bp=s1[i];
        }

        for(long long j=0;j<m;j++)
        {
            if(bp==s[j])
                {c=1;
                    cout<<bp<<endl;
                    break;
                }
        }

        if(c==1)
            break;
    }

    if(c==0)
    {
        cout<<bp<<endl;
    }

}
