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

struct att_price
{
    double att;
    int price;
    int lower;
    int upper;
};

bool compareInterval(att_price a, att_price b)
{
    return a.price < b.price ? 1 : 0;
}

int main()
{

    int n;
    vector<att_price> v;
    cin >> n;

    loop(i, n)
    {
        att_price obj;
        c >> obj.att >> obj.price >> obj.lower >> obj.upper;
        v.push_back(obj);
    }

    if (v.size() <= 1)
    {
        cout << 0 << endl;
        return 0;
    }

    sort(v.begin(), v.end(), compareInterval);

        // loop(i, v.size())
    // {
    //     cout << v[i].att << "  " << v[i].price << "  " << v[i].lower << "  " << v[i].upper << endl;
    // }

    int count = 0;

    // if()
}

// 4
// 5 1 1 5
// 4 4 2 5
// 3 3 2 5
// 2 2 2 5