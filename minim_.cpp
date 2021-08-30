#include <bits/stdc++.h>
using namespace std;

#define c cin
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop2(i, n) for (int i = 1; i < n; i++)
#define loop3(i, n) for (int i = 1; i <= n; i++)
#define loop4(i, n, arr)        \
    for (int i = 0; i < n; i++) \
    {                           \
        arr[i] = i;             \
    }
#define loop5(i, n) for (int i = 0; i <= n; i++)

int func(int);
int mini(int, int);
int main()
{
    int t;
    c >> t;
    while (t--)
    {
        int n, x;
        c >> n;
        c >> x;
        int ans = -1;

        if (n <= x)
        {
            cout << "k = " << 1 << endl
                 << endl;
            continue;
        }

        loop5(i, x)
        {
            ans = func(n - i);
            if (ans > -1)
                break;
        }

        if (ans > -1)
            cout << "k = " << ans + 1 << endl
                 << endl;
        else
            cout << "k = " << ans << endl
                 << endl;
    }
}

int func(int target)
{
    if (target == 0)
        return 0;

    if (target < 2)
        return -1;

    int power = mini(target, 1);

    if (func(target - pow(2, power)) == -1)
        return -1;

    return 1 + func(target - pow(2, power));
}

int mini(int target, int i)
{
    if (target < pow(2, i))
        return i - 2;

    if (target == pow(2, i))
        return i;

    return mini(target, i + 2);
}