#include<bits/stdc++.h>
using namespace std;
using ll=long long;

string s1,s2,s3;
string uniq;

ll letter_map[26];
bool used_digits[10];
bool letter_leading[26];
ll cnt=0;
bool first=false; 

ll build(string word){
    ll curr=0;
    for(char c:word){
        curr=curr*10 + letter_map[c-'A'];
    }
    return curr;
}

void solve(ll idx){

    if(idx==uniq.size()){
        ll val1=build(s1);
        ll val2=build(s2);
        ll val3=build(s3);

        if(val1 + val2 == val3){
            if(!first){
            cout<<val1<<'\n'<<val2<<'\n'<<val3<<endl;
            first=true;
            }
            cnt++;
        }

        return;
    }

    char curr_letter=uniq[idx];
    for(ll i=0;i<=9;i++){
        if(used_digits[i]) continue;
        if(letter_leading[curr_letter-'A'] && i==0) continue;
        
        letter_map[curr_letter-'A']=i;
        used_digits[i]=true;
        solve(idx + 1);
        used_digits[i]=false;
        letter_map[curr_letter-'A']=-1;
    }
}

ll ans(string a,string b,string c){
    s1=a,s2=b,s3=c;
    cnt=0;
    uniq="";

    for(ll i=0;i<26;i++) letter_map[i]=-1;
    for(ll i=0;i<10;i++)  used_digits[i]=false;
    for(ll i=0;i<26;i++) letter_leading[i]=false;

    bool seen[26]={false};
    string all= s1+s2+s3;

    for(char c:all){
        if(!seen[c-'A']){
            uniq+=c;
            seen[c-'A']=true;
        }
    }

    if(uniq.size()>10){
        return -1;
    }

    letter_leading[s1[0]-'A']=true;
    letter_leading[s2[0]-'A']=true;
    letter_leading[s3[0]-'A']=true;

    solve(0);

    return cnt;
}

int main(){
    string ak,bk,ck;
    cin>>ak>>bk>>ck;
    ll sz=max({ak.size(),bk.size(),ck.size()});
    if(sz>18){
        cout<<"---INTEGER OVERFLOW---"<<endl;
    }
    ll cnt1= ans(ak,bk,ck);
    if(cnt1==-1){
        cout<<"Unique digits more than 10! Invalid !!"<<endl;
    }
    else 
        cout<<"POSSIBLE WAYS: "<<cnt1<<endl;
}