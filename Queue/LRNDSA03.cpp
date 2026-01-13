#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,h;
        cin>>n>>h;
        priority_queue<long long>pq;
        for(long long i=0;i<n;i++)
            {
                long long x;
                cin>>x;
                pq.push(x);
            }
            long long c=0;
            while(h>0 && pq.top()>0)
            {
                long long temp=pq.top();
                pq.pop();
                h=h-temp;
                c++;
                temp/=2;
                pq.push(temp);
            }

            if(h<=0)
                cout<<c<<endl;
            else
                cout<<"Evacuate"<<endl;

    }
}