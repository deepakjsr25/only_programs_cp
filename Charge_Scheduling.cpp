#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#define c cin
#define loop(i, n) for (long long int i = 0; i < n; i++)
#define loop2(i, n) for (int i = 1; i < n; i++)
#define loop3(i, n) for (long long int i = 1; i <= n; i++)
#define loop4(i, n, arr)        \
    for (int i = 0; i < n; i++) \
    {                           \
        arr[i] = i;             \
    }
#define loop5(i, n) for (int i = 0; i <= n; i++)

struct train
{
    long long int a;
    long long int t;
    long long int ind;
};

bool compareInt(train j, train k)
{
    if (j.t == k.t)
        return j.a < k.a ? 1 : 0;
    return j.t < k.t ? 1 : 0;
}

int main()
{
    long long int t;
    cin >> t;
tryagain:
    while (t--)
    {
        long long int n, sum = 0, count = 0;
        c >> n;
        vector<train> v(n + 1);

        loop3(i, n)
        {
            v[i].ind = i;
            c >> v[i].a;
        }

        loop3(i, n)
                c >>
            v[i].t;

        sort(v.begin() + 1, v.end(), compareInt);

        // loop3(i, n)
        // {
        //     cout << v[i].ind << " " << v[i].a << " " << v[i].t << endl;
        // }

        vector<train> v2;

        loop3(i, n)
        {
            if (v[i].a <= (v[i].t - sum) && v[i].a > 0)
            {
                train obj;
                count++;
                obj.ind = v[i].ind;
                obj.a = sum;
                sum = sum + v[i].a;
                obj.t = sum;
                v2.push_back(obj);
            }
        }
        cout << count << endl;
        loop(i, v2.size())
                cout
            << v2[i].ind << " " << v2[i].a << " " << v2[i].t << endl;

        goto tryagain;
    }
}