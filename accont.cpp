#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;

    while(t--)
    {
        int n,c=0,t=1;
        cin>>n;
        vector<int> s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            if(s[i]==0)
            {
                t=0;
            }
        }

        if(s.size()==2)
        {
            if(s[0]==s[1])
            {
                c=1;
            }
            else
            {
                c=0;
            }
        }
        else
        {
        for(int i=1;i<=n-1;i++)
        {
            if(s[i]==0 && s[i-1]==0)
            {
                c=1;
                break;
            }


        }

        }

        if(t==0)
        {
         if(c==0)
            cout<<"NO"<<endl;
         else
                cout<<"YES"<<endl;
        }
        else
            cout<<"YES"<<endl;

    }


    return 0;
}
