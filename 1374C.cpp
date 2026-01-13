#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        string s;
        cin>>n;
        int b=0;
        int ans=0;

        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                b++;
            else
                b--;

            if(b<0)
            {
                b=0;
                ans++;
            }
        }

        cout<<ans<<endl;
    }
}
