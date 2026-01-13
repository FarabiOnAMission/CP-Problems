#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int c=0;

    int min_steps = (n + 1) / 2;
    while (min_steps <= n) {
        if (min_steps % m == 0) {
            cout << min_steps << endl;
            c=1;
            break;
        }
        else
        {
            c=0;
        min_steps++;
    }
    }
    if(c==0)
    {
    cout << -1 << endl;
    }
    return 0;
}
