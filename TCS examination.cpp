#include<bits/stdc++.h>

using namespace std;

int main()

{
    int tc;
    cin>>tc;
    int dsa1,dsa2,toc1,toc2,dm1,dm2;

    for(int i=0;i<tc;i++)
    {
        int dragon=0;
        int sloth=0;
        cin>>dsa1>>toc1>>dm1;
        cin>>dsa2>>toc2>>dm2;
        dragon = dsa1 + toc1 + dm1;
        sloth = dsa2 + toc2 + dm2;

        if(dragon>sloth)
        {
            cout<<"Dragon"<<endl;
        }

        else if(sloth>dragon)
        {
            cout<<"Sloth"<<endl;
        }
        else
            cout<<"Tie"<<endl;

    }
}
