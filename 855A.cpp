#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    unordered_set<string>us;
    while(n--)
    {
        string s;
        cin>>s;
        if(us.count(s)==0)
        {
            cout<<"NO"<<endl;
            us.insert(s);
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
