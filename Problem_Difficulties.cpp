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
        set<int> s;
        // vector<int> arr(11);
        int arr[11];
        memset(arr, 0, sizeof(arr));
        loop(i, 4)
        {
            int a;
            cin >> a;
            arr[a] = arr[a] + 1;
            s.insert(a);
        }

        loop3(i, 10)
        {
            if (arr[i] == 2)
            {
                cout << 2 << endl;
                goto tryagain;
            }
        }

        // loop3(i, 10)
        //         cout
        //     << i << "  " << arr[i] << endl;

        cout << (s.size() / 2) << endl;
        goto tryagain;
    }
}