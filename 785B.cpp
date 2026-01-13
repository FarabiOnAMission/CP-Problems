#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin>>n;
    vector<long long>k1;
    vector<long long>k2;
    long long a,b;
    for(long long i=0;i<n;i++)
    {
        cin>>a>>b;
        k1.push_back(a);
        k2.push_back(b);
    }

    cin>>m;
    vector<long long>k3;
    vector<long long>k4;
    for(long long i=0;i<m;i++)
    {
        cin>>a>>b;
        k3.push_back(a);
        k4.push_back(b);
    }

    sort(k1.begin(),k1.end());
    sort(k2.begin(),k2.end());
    sort(k3.begin(),k3.end());
    sort(k4.begin(),k4.end());

    long long m1=max(0LL,k3[m-1]-k2[0]);
    long long m2=max(0LL,k1[n-1]-k4[0]);


    cout<<max(m1,m2)<<endl;



}
