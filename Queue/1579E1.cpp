#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>x(n);
        deque<long long>dq;
        for(long long i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(long long i=0;i<n;i++)
        {
            if(!dq.empty() && dq.front()>x[i])
            {
                dq.push_front(x[i]);

            }
            else
            {
                dq.push_back(x[i]);
            }
        }

        for(auto x:dq)
            cout<<x<<" ";

        cout<<endl;
    }
}
