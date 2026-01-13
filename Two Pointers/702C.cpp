#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
   ll n,m;
   cin>>n>>m;
   vector<ll>a(n);
   vector<ll>b(m);

   for(ll i=0;i<n;i++) cin>>a[i];
   for(ll i=0;i<m;i++) cin>>b[i];

   ll r=0;
   for(ll i=0;i<n;i++)
   {
       ll j=0;
       ll s=LLONG_MAX;
       ll l1=0,r1=m-1;
       while(l1<=r1)
       {
           ll mid=l1+(r1-l1)/2;
           ll d=abs(a[i]-b[mid]);
            s=min(s,d);
           if(a[i]<b[mid])
           {
               r1=mid-1;
           }
           else
                l1=mid+1;;
       }

       r=max(r,s);
   }

   cout<<r<<endl;

}

