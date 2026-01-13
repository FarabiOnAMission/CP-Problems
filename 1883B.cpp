
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,k,c=0;
       cin>>n>>k;
       string s;
       cin>>s;
       string word;

       for(int i=n-1;i>=0;i--)
       {
           word+=s[i];
       }

       for(int i=0;i<n;i++)
       {
           if(s[i]!=word[i])
           {
               c++;
           }
       }

       if(c==k)
       {
           cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
   }
}
