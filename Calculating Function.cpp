#include<iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    long long n;
    cin>>n;
    long long a=0;

    for(long long i=1;i<=n;i++)
    {
        a = a + (i % 2 == 0 ? 1 : -1) * i;

    }

    cout<<a<<endl;

    return 0;
}
