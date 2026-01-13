#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    vector<pair<string,string>>s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string a,b;
        cin>>a>>b;
        s.push_back(make_pair(a, b));
    }
    int c=t;

    for(int i=0;i<t;i++)
    {
        for(int j=i;j<t;j++)
        {
            if(s[i]==s[j])
            {
                c--;
            }
        }
    }

    cout<<c<<endl;
}