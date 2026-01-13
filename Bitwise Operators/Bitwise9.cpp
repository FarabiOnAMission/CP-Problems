#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        vector<int> a(p);
        for(int &x:a)
        {
            cin>>x;
        }

        bool found=false;

        for(int mask=0;mask<(1<<p);mask++)
        {
            int sum=0;
            for(int i=0;i<p;i++)
            {
                if(mask & (1<<i))
                {
                    sum+=a[i];
                }
            }
            if(sum==n)
            {
                found=true;
                break;
            }
        }

        cout << (found ? "YES\n" : "NO\n");

    }
    return 0;
}
