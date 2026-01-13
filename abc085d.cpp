#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,h;
    cin>>n>>h;
    vector<long long>t(n);
    vector<long long>w(n);
    long long c=0;
    for(long long i=0;i<n;i++)
    {
        cin>>w[i]>>t[i];
    }
    sort(w.begin(),w.end());
    sort(t.begin(),t.end(),greater<int>());
    for(long long i=0;i<n;i++)
    {
        if(t[i]<=w[n-1] || (h<=0))
            break;
        else
        {
            h-=t[i];
        }

        c++;
    }
    if(h<=0)
    {
        cout<<c<<endl;
        return 0;
    }

    c+=((h+w[n-1]-1)/w[n-1]);
    cout<<c<<endl;
}
