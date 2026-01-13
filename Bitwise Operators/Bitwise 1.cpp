#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int mand=0,mor=0,mxor=0;

    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i&j)<k)
            {
                mand=max(mand,(i&j));

            }
            if((i|j)<k)
            {
                    mor=max(mor,(i|j));
            }

            if((i^j)<k)
            {
                mxor=max(mxor,(i^j));
            }
        }
    }


    cout<<mand<<endl;
    cout<<mor<<endl;
    cout<<mxor<<endl;
    

    return 0;
}