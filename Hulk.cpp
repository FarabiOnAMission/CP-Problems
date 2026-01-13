#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int n;
    cin>>n;
    string sent1 = "I hate it";
    string sent2= "I love it";
    string senth="I hate that ";
    string sentl = "I love that ";
    string s= "";

    if(n==1)
    {
        cout<<sent1<<endl;
    }

    if(n>=2)
    {
        for(int i=1;i<n;i++)
        {
            if(i%2!=0)
            {
                s=s + senth;
            }
            else
                s =s + sentl;
        }
    }


    if(n%2==0)
    {
        s = s + sent2;
    }

    else if(n!=1 && n%2!=0)
    {
        s=s + sent1;
    }

    cout<<s<<endl;

    return 0;
}
