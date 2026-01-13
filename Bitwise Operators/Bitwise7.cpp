#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &x:a)
    {
        cin>>x;
    }

    for(int mask=0;mask<(1<<n);mask++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(mask &(1<<i))
                sum+=a[i];
            else
                sum-=a[i];
        }
        if(sum%360==0)
            {
                cout<<"YES\n";
                return 0;
            }
    }

    cout<<"NO\n";
    return 0;
}