#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;

    vector<long long>l(n);

    for(long long i=0;i<n;i++)
    {
        cin>>l[i];
    }



    if(k==1)
    {
        sort(l.begin(),l.end());
        cout<<l[0]<<endl;
    }
    else if(k==2)
    {
        cout<<max(l[0],l[n-1])<<endl;
    }
    else
    {   sort(l.begin(),l.end());
        cout<<l[n-1]<<endl;
    }


}
