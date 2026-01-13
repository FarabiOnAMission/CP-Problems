#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;

    float fx2 = (d2 + r2 - c2) / 2.0;
    float fx1 = (d1 + r1 - c2) / 2.0;
    float fy1 = (d2 - r2 + c2) / 2.0;
    float fy2 = (d1 - r1 + c2) / 2.0;

    if (fx1 != (int)fx1 || fx2 != (int)fx2 || fy1 != (int)fy1 || fy2 != (int)fy2) {
        cout << -1 << endl;
        return 0;
    }

    int x1 = fx1, x2 = fx2, y1 = fy1, y2 = fy2;

    if (x1 > 0 && x1 < 10 &&
        x2 > 0 && x2 < 10 &&
        y1 > 0 && y1 < 10 &&
        y2 > 0 && y2 < 10 &&
        set<int>{x1, x2, y1, y2}.size() == 4)
    {
        cout << x1 << " " << y1 << endl;
        cout << x2 << " " << y2 << endl;
    }
    else {
        cout << -1 << endl;
    }

}
