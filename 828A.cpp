#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,a,b;
    cin>>n>>a>>b;
    long long p=0;
    long long tempb=0;
    long long x;
    while(n--)
    {
        cin>>x;
        if(x==1)
        {
            if(a>0)
                {a--;}
            else if(b>0)
            { tempb++;
                b--;
            }
            else if(tempb>0)
            {
                tempb--;
            }
            else
            {
                p++;
            }
        }

        else if(x==2)
        {
            if(b>0)
            {
                b--;
            }
            else
            {
                p+=2;
            }

        }


    }

    cout<<p<<endl;

}
