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

tryagain:
    while (t--)
    {
        vector<pair<int, int>> v;

        int a, b, c1, d, e, f;

        cin >> a >> b >> c1 >> d >> e >> f;
        v.push_back(make_pair(a, b));
        v.push_back(make_pair(c1, d));
        v.push_back(make_pair(e, f));

        // loop(i, v.size())
        //         cout
        //     << v[i].first << " " << v[i].second << endl;

        if ((v[0].first == v[1].first && v[0].second == v[1].second) || (v[0].first == v[1].second && v[0].second == v[1].first))
        {
            cout << 1 << endl;
            goto tryagain;
        }

        if ((v[0].first == v[2].first && v[0].second == v[2].second) || (v[0].first == v[2].second && v[0].second == v[2].first))
        {
            cout << 2 << endl;
            goto tryagain;
        }

        cout << 0 << endl;
        goto tryagain;
    }
}