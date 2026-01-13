#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    queue<int>nd;
    queue<int>d;
    stack<int>t;
    int i=1;
    while(true)
    {
        cin>>s;
        if(i%2==0)
        {
            if(s=="SA" || s=="DA" || s=="CA" || s=="HA")
                d.push(4);
            else if(s=="SK" || s=="DK" || s=="CK" || s=="HK")
                d.push(3);
            else if(s=="SQ" || s=="DQ" || s=="CQ" || s=="HQ")
                d.push(2);
            else if(s=="SJ" || s=="DJ" || s=="CJ" || s=="HJ")
                d.push(1);
            else
                d.push(0);
}
        else
        {
        if(s=="SA" || s=="DA" || s=="CA" || s=="HA")
            nd.push(4);
        else if(s=="SK" || s=="DK" || s=="CK" || s=="HK")
            nd.push(3);
        else if(s=="SQ" || s=="DQ" || s=="CQ" || s=="HQ")
            nd.push(2);
        else if(s=="SJ" || s=="DJ" || s=="CJ" || s=="HJ")
            nd.push(1);
        else
            nd.push(0);
        }
        i++;
        if(s=="#")
            break;
    }

    i=1;

    while(!d.empty() || !nd.empty())
    {
        int temp=nd.top();

    }


}
