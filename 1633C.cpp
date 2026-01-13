#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    long long hc,dc,hm,dm;
    cin>>hc>>dc;
    cin>>hm>>dm;
    long long k,a,w;
    cin>>k>>w>>a;
    int c=0;

        for(long long i=0;i<=k;i++)
        {
            long long new_hc=hc+(a*i);
            long long new_dc=dc+(w*(k-i));

            long long t1=((new_hc+dm-1)/dm);
            long long t2=((hm+new_dc-1)/new_dc);

            if(t1>=t2)
                {
                c=1;
                break;
                }


        }
            if(c==1)
                {
                cout<<"YES"<<endl;
                }
                else
                {
                cout<<"NO"<<endl;
                }




    }

    return 0;
}
