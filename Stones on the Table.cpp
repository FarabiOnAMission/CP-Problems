#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int a,b=0;
    string s;

    cin>>a;
    cin>>s;

    for(int i=0; i<a ; i++)
    {
        if(s[i]==s[i+1])
        {
            b=b+1;
        }
    }

    cout<<b<<endl;

    return 0;
}
