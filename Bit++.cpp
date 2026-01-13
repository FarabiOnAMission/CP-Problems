#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
        string X;
        int n;
        int number=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>X;
        if(X=="X++" || X== "++X" )
            number= number+1;
        else if(X=="X--" || X =="--X" )
        {
            number= number-1;
        }
        }

        cout<<number;

}


