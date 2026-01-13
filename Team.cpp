#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n = {0};
    int Petrya, Vasya, Tonya;
    int counts;

    cin>>counts;

    for(int i=0;i < counts; i++)
    {
        cin>> Petrya >> Vasya >> Tonya;
        if(Petrya + Vasya + Tonya >= 2)
            {
                n= n + 1;
            }
    }

    cout<<n<<endl;


    return 0;

}
