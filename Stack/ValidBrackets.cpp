#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char>k;
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        if(c=='(' || c=='{' || c=='[')
            {
                k.push(c);
            }

        else
        {
           char top = k.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                k.pop();
            } else
            {
                cout << "false" << endl;
                return 0;
            }
        }
    }

    cout<<"true"<<endl;

    return 0;
}
