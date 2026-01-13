#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m=0;
    cin>>n;
    vector <long long> arr;
    long long x;
    for(long long i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }

    for(long long i=1;i<arr.size();i++)
    {
        if(arr[i]<arr[i-1])
        {
            m+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];

        }
    }

    cout<<m<<endl;
}
