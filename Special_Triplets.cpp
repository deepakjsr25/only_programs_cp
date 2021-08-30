#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        c >> n;
        int sum = 0;
        loop3(i, n)
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                sum = sum + 1;
                //  if( j != n )
                if (n % j < i)
                    sum = sum + n / j - 1;
                else if (n % j >= i)
                    sum = sum + n / j;
            }
        }

        cout << sum << endl;
    }
}