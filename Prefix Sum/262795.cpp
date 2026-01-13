#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    vector<int>pref(n+1,0);
    for(int i=1;i<=n;i++)
    {
        pref[i]=pref[i-1];
        if(s[i-1]=='a')
            pref[i]++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pref[r]-pref[l-1]<<endl;
    }


}
