#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

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

tryagain:
    while (t--)
    {

        int G1, S1, B1, G2, S2, B2;

        cin >> G1;
        cin >> S1;
        cin >> B1;
        cin >> G2;
        cin >> S2;
        cin >> B2;

        if (G1 + S1 + B1 > G2 + S2 + B2)
        {
            cout << 1 << endl;
            goto tryagain;
        }
        else
        {
            cout << 2 << endl;
            goto tryagain;
        }
    }
}