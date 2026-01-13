#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x1=0,x2=0;
    vector <int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    std::sort(v.begin(),v.end());
    x1= std::abs(v[1] - v[0]);
    x2 = std::abs(v[1]-v[2]);

    cout<<""<<x1+x2<<endl;

    return 0;
}
