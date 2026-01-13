#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int a1,a2;
        int b1,b2;
        vector<int>su;
        vector<int>sl;
        int s1=0;
        int s2=0;
        cin>>a1>>a2>>b1>>b2;
        su.push_back(a1);
        su.push_back(a2);
        sl.push_back(b1);
        sl.push_back(b2);
        int c=0;
        while(c<4)
        {
        int suc=0;
        int slc=0;
        for(int i=0;i<2;i++)
        {
            if(su[i]>sl[i])
            {
                suc++;
            }
            else if(su[i]<sl[i])
            {
                slc++;
            }
        }
        if(suc>slc)
        {
            s1++;
        }

        c++;
        swap(sl[0],sl[1]);
        if(c==2)
        {
            swap(su[0],su[1]);
        }
        }

        cout<<s1<<endl;

    }

}
