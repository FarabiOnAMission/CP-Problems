#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>arr(100000,0);
    for(int i=1;i<=100000;i++)
    {
        for(int j=i;j<=100000;j+=i)
        {
            arr[j]++;
        }
    }

    while(t--)
    {
        int a;
        cin>>a;
        int d=1;
        int e;
        int c=0;
        for(int i=1;i<=100000;i++)
        {
            if(arr[i]>=4)
            {
                for(int j=1;j<=i;j++)
                {
                    if(i%j==0)
                    {
                        e=j;
                        if(e-d>=a)
                        {
                            c=1;
                            d=j;
                            break;
                        }
                        d=j;
                    }

                }
            }
            if(c==1)
            {
                cout<<d<<endl;
                break;
            }
        }


    }
}
