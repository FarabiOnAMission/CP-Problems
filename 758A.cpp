#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int x;
    cin>>n;
    vector<int> s;
    int t=0;

    while(n--)
    {
        cin>>x;
        s.push_back(x);
    }

    sort(s.begin(),s.end());

    int m=s[s.size()-1];

    for(int i=0;i<s.size();i++)
    {
       t=t+ (m-s[i]);
    }

    cout<<t;

}
