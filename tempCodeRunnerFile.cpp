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

    // auto start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> ans2;
    int t;
    c >> t;
    while (t--)
    {
        int n, q;
        c >> n;
        c >> q;

        vector<int> v(n + 1);
        loop3(i, n)
                c >>
            v[i];

        vector<vector<int>> tp(q);

        loop(i, q)
        {
            int a, b, cd;
            c >> a >> b >> cd;
            tp[i].push_back(a);
            tp[i].push_back(b);
            tp[i].push_back(cd);
        }

        vector<int> ans(q);

        loop(i, q)
        {
            if (tp[i][0] == 1)
                ans[i] = querry_1(v, tp[i][1], tp[i][2]);
            else
                ans[i] = querry_2(v, tp[i][1], tp[i][2]);
        }

        ans2.push_back(ans);
    }

    for (auto it : ans2)
    {
        for (auto it2 : it)
            cout << it2 << endl;
    }

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