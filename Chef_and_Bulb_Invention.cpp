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

// deep:

//     cout << "fdfs";
//     goto deep;

int main()
{

    int t;
    c >> t;
// vector<int> v;
tryagain:
    while (t--)
    {
        int n, p, k, sum = 0;
        c >> n >> p >> k;

        int q = p / k, r = p % k, q2 = (n - 1) / k, r2 = (n - 1) % k;

        if (r <= r2)
            sum = r * q2 + r ;
        else
            sum = r * q2 + r2 + 1;

        sum = sum + q + 1;

        cout << sum << endl;
        goto tryagain;
    }
    
}