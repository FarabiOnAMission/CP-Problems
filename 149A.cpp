#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    int mo=12;
    int n;
    int sum=0;
    int c=0;
    vector<int> s;
    cin>>k;
    while(mo--)
    {
        cin>>n;
        s.push_back(n);
    }

    sort(s.begin(),s.end(),greater<int>());
    if(k==0)
    {
        c=0;
        cout<<c<<endl;
    }
    else
    {
    for(int i=0;i<12;i++)
    {
        sum+=s[i];
        c++;
        if(sum>=k)
        {
            break;
        }

    }

    if(sum>=k)
    {
        cout<<c<<endl;
    }
    else
    {
        c=-1;
    cout<<c<<endl;
    }

    }



}
