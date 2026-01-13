#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    string s1;
    string s2;

    cin>>s1;
    cin>>s2;
    vector<int>k1;
    vector<int>k2;

    for(long long i=0;i<n;i++)
    {
        k1.push_back(s1[i]-'0');
        k2.push_back(s2[i]-'0');
    }

    sort(k2.begin(),k2.end(),greater<int>());

    long long c1=0;
    long long c2=0;

    for(long long i=0;i<n;i++)
    {
        if(k1[i]<k2[i])
        {
            c2++;
        }
        else if(k1[i]>k2[i])
        {
            c1++;
        }
    }

    cout<<c1<<endl;
    cout<<c2<<endl;


}


