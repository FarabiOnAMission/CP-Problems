#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    long long num;
    cin>>num;
    int counts=0;

    string lucky = std::to_string(num);

    for(int i=0;i<lucky.size();i++)
    {
        if(lucky[i]=='4' || lucky[i]=='7')
        {
            counts++;
        }
    }

    if(counts==4 || counts ==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
