#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string number1;
    string number2;
    cin>>number1;
    cin>>number2;
    string result = "";

    for(int i=0;i< number1.size();i++)
    {
        if(number1[i] != number2[i])
        {
            result = result + '1';
        }
        else
        {
            result = result + '0';
        }
    }

    cout<<result<<endl;

    return 0;

}
