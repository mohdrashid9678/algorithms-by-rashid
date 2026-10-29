// CSES Number Spiral Problem
#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long y, x;
        cin >> y >> x;

        long long ans = 0;
        // If y >= x, then the number is on the y-th row, otherwise it's on the x-th column.
        if (y >= x)
        {
            if (y % 2 == 0)
            {
                ans = y * y - x + 1;
            }
            else
            {
                ans = (y - 1) * (y - 1) + x;
            }
        }
        else
        {
            if (x % 2 == 1)
            {
                ans = x * x - y + 1;
            }
            else
            {
                ans = (x - 1) * (x - 1) + y;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}