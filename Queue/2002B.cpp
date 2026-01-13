#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>p1(n);
        vector<long long>p2(n);

        for(long long i=0;i<n;i++)
        {
            cin>>p1[i];
        }
        for(long long i=0;i<n;i++)
        {
            cin>>p2[i];
        }
        vector<long long>p3=p2;
        reverse(p3.begin(),p3.end());
        if(p1==p2 || p1 == p3)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
}
