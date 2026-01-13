#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hh, mm;
    char s;

    cin >> hh >> s >> mm;

    if(hh==5 && mm<=50)
    {
        cout<<50-mm<<endl;
    }
     else if (hh >= 5 && hh < 10)
    {
        if (mm > 1)
        {
            cout << ((10 - hh - 1) * 60) + (61 - mm) << endl;
        }
        else
        {
            cout << ((10 - hh) * 60) + (1 - mm) << endl;
        }
    }
    else if (hh == 23 && mm > 32)
    {
        cout << 60 - mm << endl;
    }
    else
    {
        int rev = (hh % 10) * 10 + (hh / 10);
        if (rev >= mm)
        {
            cout << rev - mm << endl;
        }
        else
        {

            hh++;
            if (hh == 24) hh = 0;
            rev = (hh % 10) * 10 + (hh / 10);
            cout << (60 - mm) + rev << endl;
        }
    }

    return 0;
}
