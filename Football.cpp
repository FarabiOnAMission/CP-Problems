#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string team;
    cin>>team;

    string target0= "0000000";
    string target1= "1111111";

    size_t pos1=team.find(target0);
    size_t pos2=team.find(target1);

    if(pos1 != string::npos || pos2 != string::npos)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;

}
