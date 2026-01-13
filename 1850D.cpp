#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--)
    {
        cin>>n>>k;
        vector<int> s1;
        vector<int>ans;
        int x,c=1;
        int m=1;

        if(n==1)
        {
            cin>>x;
            m=0;
            cout<<m<<endl;
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s1.push_back(x);
        }

        sort(s1.begin(),s1.end());

        for(int i=1;i<n;i++)
        {
            if(s1[i]-s1[i-1]<=k)
            {
                c++;
            }
            else
            {
                c=1;
            }
        m=max(m,c);
        }
        cout<<n-m<<endl;
    }
    }
}
