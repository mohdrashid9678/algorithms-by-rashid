#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // A permutation is called beautifull if no two adjacent have difference of 1 or less. Print any beautiful permutation of size n. If no such permutation exists, print -1.
    if (n == 1)
    {
        cout << 1 << "\n";
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << "\n";
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}