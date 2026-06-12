#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m,q;
    cin>>n>>m>>q;
    vector<ll>teacher_pos(m),a(q);
    for(ll i=0;i<m;i++){
      cin>>teacher_pos[i];
    }
    for(ll i=0;i<q;i++) cin>>a[i];
    vector<ll>lefts(q),rights(q);
    
    ll l=0,r=n;
    sort(teacher_pos.begin(),teacher_pos.end());

    for(ll i=0;i<q;i++){
      auto it=lower_bound(teacher_pos.begin(),teacher_pos.end(),a[i]);
      if(it==teacher_pos.end()){
        ll teacher = teacher_pos.back();
        cout<<n-teacher<<endl;
      }
      else if(it==teacher_pos.begin()){
        ll teacher = teacher_pos[0];
        cout<<teacher-1<<endl;
      }
      else{
        ll left=*(it-1);
        ll right=*(it);

        cout<<(right-left)/2<<endl;
      }
    }
    }
    }

/*

for each query q,
David will check his left and right side,
If there are no teacher in his left side then david will run to the wall at 0
Else if there are no teacher in his right side then david will run to the wall at n
else
  David will check his just left and right teacher and move to their middle position so its equal
  for both of the teacher to come

*/

/*

ll l=0;
//l lefts[n];
teacher_pos[0]=0;
teacher_pos[n]=n;
for(ll i=0;i<n;i++)
{
while(teacher_pos[l+1]<q[i]){
l++;
}
lefts[i]=v[l];
}

ll r=n;
//ll rights[n];
for(ll i=n;i>=0;i--)
{
while(teacher_pos[r-1]>q[i]){
r--;
}
rights[i]=teacher_pos[r];
}


*/

