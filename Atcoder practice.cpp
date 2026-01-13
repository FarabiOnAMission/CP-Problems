#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int h=0;
       vector<int> s(n,0);
       vector<int>l(n);
       vector<int>r(n);

       for(int i=0;i<n;i++)
       {
           cin>>l[i];
           cin>>r[i];
       }

       for(int i=0;i<n,i++)
       {
           if(h>=l[i] && h< r[i]-1)
           {
               h+=1;
               s[i]=1;
           }
       }



    }
