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

int querry_1(vector<int>, int, int);
int querry_2(vector<int>, int, int);
int gcd(int, int);
int lcm(int, int);

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n;
        cin >> q;

        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >>
                v[i];

        vector<vector<int>> tp(q);

        for (int i = 0; i < q; i++)
        {
            int a, b, cd;
            cin >> a >> b >> cd;
            tp[i].push_back(a);
            tp[i].push_back(b);
            tp[i].push_back(cd);
        }


        for (int i = 0; i < q; i++)
        {
            if (tp[i][0] == 1)
                cout << querry_1(v, tp[i][1], tp[i][2]) << endl;
            else
                cout << querry_2(v, tp[i][1], tp[i][2]) << endl;
        }

        // ans2.push_back(ans);

    }

    // for (auto it : ans2)
    // {
    //     for (auto it2 : it)
    //         cout << it2 << endl;
    // }

    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<microseconds>(stop - start);
    // cout << duration.count() << endl;
}

int querry_1(vector<int> v, int ft, int lt)
{
    if (ft == lt)
        return v[ft];
    return gcd(v[ft], querry_2(v, ft + 1, lt));
}

int querry_2(vector<int> v, int ft, int lt)
{
    if (ft == lt)
        return v[ft];
    return lcm(v[ft], querry_1(v, ft + 1, lt));
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;

    return gcd(max(a, b) % min(a, b), min(a, b));
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

// 1
// 6 3
// 2 4 8 16 32 64
// 1 1 6
// 2 1 5
// 1 5 6