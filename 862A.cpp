#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>k(n);

    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }

    int c=0;
    int e=0;
    for(int i=0;i<n;i++)
    {
        if(k[i]<x)
        {
            e++;
        }
        if(k[i]==x)
        {
            c=1;
        }


    }


    cout<<c+(x-e)<<endl;


}
