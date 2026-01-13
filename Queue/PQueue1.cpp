#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main()
{
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        priority_queue<long long>n;
        string s;
        long long a;

    while(true)
    {
        cin>>s;
         if(s=="end")
            {break;}
        else if(s=="insert")
        {
            cin>>a;
            n.push(a);
        }
        else
        {
            cout<<n.top()<<endl;
            n.pop();
        }
    }
}
