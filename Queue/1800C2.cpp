#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        priority_queue<long long>q;
        long long ans=0;
        for(long long i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            q.push(a);
            if(a==0 && !q.empty())
            {
                ans=ans+q.top();
                q.pop();
            }
        }

        cout<<ans<<endl;
    }
}
