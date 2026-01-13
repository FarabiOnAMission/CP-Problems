#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    multiset<long long>s;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        s.insert(x);
    }

    while(m--)
    {
        long long a;
        cin>>a;
        auto k=s.upper_bound(a);
        if(k==s.begin())
        {
        cout<<"-1"<<endl;
        }
        else
        {
            k--;
            cout<<*k<<endl;
            auto it=s.find(*k);
            s.erase(it);
        }
    }

}
