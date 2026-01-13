#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,f;
    cin>>n>>f;
    vector<long long>a(n);
    vector<long long>b(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }

    vector<long long>ini(n);
    vector<long long>fin(n);
    vector<long long>gain(n);
    long long sum1=0;
    long long sum2=0;

    for(long long i=0;i<n;i++)
    {
        ini[i]=(min(a[i],b[i]));
        fin[i]=(min(2*a[i],b[i]));
        gain[i]=(fin[i]-ini[i]);
        sum1+=ini[i];
    }

     vector<long long>idx(n);
     iota(idx.begin(),idx.end(),0);

     sort(idx.begin(),idx.end(),[&](int i,int j)
     {
         return gain[i] > gain[j];
     });


    for(long long i=0;i<n;i++)
    {
        if(i<f)
            sum2+=fin[idx[i]];
        else
            sum2+=ini[idx[i]];
    }

    cout<<sum2<<endl;
}
