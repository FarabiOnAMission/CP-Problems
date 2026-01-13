#include<iostream>
#include<string>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
        string input;
        cin>>input;

        if(islower(input[0]))
        {
           input[0]=toupper(input[0]);
        }


        cout<<input;
}
