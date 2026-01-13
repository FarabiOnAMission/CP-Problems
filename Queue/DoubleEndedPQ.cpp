#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,q;
    cin>>n>>q;
    multiset<long long>ms;
    for(long long i=0;i<n;i++)
    {
       long long x;
       cin>>x;
       ms.insert(x);

    }

    while(q--)
    {
        long long a;
        cin>>a;
        if(a==0)
        {
            long long b;
            cin>>b;
            ms.insert(b);
        }
        else if(a==1)
        {
            cout<<*ms.begin()<<endl;
            ms.erase(ms.begin());
        }
        else
        {
            auto it=prev(ms.end());
            cout<<*it<<endl;
            ms.erase(it);
        }
    }
}
