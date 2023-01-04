#include <iostream>
using namespace std;
int i = 0, j = 0, n = 0, a[1030] = { 1 };
int main()
{
    cin >> n;
    for (i = 0; i < 1 << n; i++)
    {
        for (j = 1; j < (1 << n) - i; j++)
            cout << " ";
        for (j = i; j >= 0; j--)
            a[j] ^= a[j - 1];
        if (!(i % 2))
            for (j = 0; j <= i; j++)
                cout << (a[j] ? "/\\" : "  ");
        else
            for (j = 0; j <= i; j += 2)
                cout << (a[j] ? "/__\\" : "    ");
        cout << endl;
    }
    return 0;
}