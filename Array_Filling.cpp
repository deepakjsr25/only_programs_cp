#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#define c cin
#define loop(i, n) for (long long i = 0; i < n; i++)
#define loop2(i, n) for (int i = 1; i < n; i++)
#define loop3(i, n) for (long long i = 1; i <= n; i++)
#define loop4(i, n, arr)        \
    for (int i = 0; i < n; i++) \
    {                           \
        arr[i] = i;             \
    }
#define loop5(i, n) for (int i = 0; i <= n; i++)

// vector<vector<int>> v(row + 1, vector<int>(col + 1, 0)); for initializing 2d vector

// struct arrfill
// {
//     int first;
//     int last;
// };

bool compareInt(pair<long long, long long> a, pair<long long, long long> b)
{
    if (a.first == b.first)
        return a.second > b.second ? 1 : 0;

    return a.first > b.first ? 1 : 0;
}

int main()
{
    long long t;
    cin >> t;

tryagain:
    while (t--)
    {
        long long n, m;
        c >> n >> m;

        int arr[n + 1];
        vector<pair<long long, long long>> v;

        v.push_back(make_pair(0, 0));

        memset(arr, 0, sizeof(arr));

        loop(i, m)
        {
            long long a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }

        // loop(i, n)
        //         cout
        //     << arr[i] << endl;

        sort(v.begin() + 1, v.end(), compareInt);

        // loop(i, m)
        //         cout
        //     << v[i].first << "  " << v[i].second << endl;

        queue<long long> q;

        loop3(i, n)
        {
            if (i % v[1].second != 0)
                arr[i] = v[1].first;
            else
                q.push(i);
        }

        // loop3(i, n)
        //         cout
        //     << arr[i] << " ";
        // cout << endl;

        queue<long long> q2;

        for (long long i = 2; i < v.size(); i++)
        {
            while (!q.empty())
            {
                long long temp = q.front();
                q.pop();
                if (temp % v[i].second != 0)
                    arr[temp] = v[i].first;
                else
                    q2.push(temp);
            }
            if (!q2.empty())
                q = q2;
            else
                break;
        }

        // loop3(i, n)
        //         cout
        //     << arr[i] << " ";
        // cout << endl;

        long long sum = 0;

        loop3(i, n)
            sum = sum + arr[i];

        cout << sum << endl;
        goto tryagain;
    }
}