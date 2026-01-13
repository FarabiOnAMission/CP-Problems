#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    priority_queue<long long,vector<long long>,greater<>>pq;
    long long s=0;

    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        pq.push(a);
        s+=a;
        if(s<0)
        {
            s-=pq.top();
            pq.pop();
        }
    }

    cout<<pq.size()<<endl;

}
