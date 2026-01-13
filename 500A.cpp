
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,t;
   cin>>n>>t;
   vector<int> s(n);
   int a;

   for(int j=1;j<n;j++)
   {
       cin>>s[j];

   }

    int i=1;
    while(i<t)
    {
        i+=s[i];
    }

    if(i==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
