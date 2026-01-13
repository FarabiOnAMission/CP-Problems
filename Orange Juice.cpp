#include<iostream>
#include<iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double a,b;
    cin>>a;
    double x=0;
    double proportion;

    for(int i=0;i<a;i++)
    {
        cin>>b;
        x=x+b;
    }

    proportion=x/a;
    cout<<std::fixed<<std::setprecision(12);
    cout<<proportion<<endl;

    return 0;
}
