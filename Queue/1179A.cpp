#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long n,q;
   cin>>n>>q;
   deque<long long>dq(n);
   for(long long i=0;i<n;i++)
   {
        cin>>dq[i];
   }


   while(q--)
   {
    long long tq;
    cin>>tq;
    while(tq--)
    {
        long long a=dq[0];
        long long b=dq[1];
        dq.pop_front();
        dq.pop_back();

        if(a>b)
        {
            dq.push_front(a);
            dq.push_back(b);
        }
        else
        {

        }
    }
   }
}