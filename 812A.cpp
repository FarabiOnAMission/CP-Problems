#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, r1, s1, p1;
    int l2, r2, s2, p2;
    int l3, r3, s3, p3;
    int l4, r4, s4, p4;

    cin >> l1 >> s1 >> r1 >> p1;
    cin >> l2 >> s2 >> r2 >> p2;
    cin >> l3 >> s3 >> r3 >> p3;
    cin >> l4 >> s4 >> r4 >> p4;

    vector<int> l = {l1, l2, l3, l4};
    vector<int> r = {r1, r2, r3, r4};
    vector<int> s = {s1, s2, s3, s4};
    vector<int> p = {p1, p2, p3, p4};

    vector<int> threat_l = {l2, l3, l4, l1};
    vector<int> threat_r = {r4, r1, r2, r3};
    vector<int> threat_s = {s3, s4, s1, s2};
    for (int i = 0; i < 4; i++)
    {
        if (p[i] == 1)
        {
            if (l[i] == 1 || r[i] == 1 || s[i] == 1 || threat_l[i] == 1 || threat_r[i] == 1 || threat_s[i] == 1)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
