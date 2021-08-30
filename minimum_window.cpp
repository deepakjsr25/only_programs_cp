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
    string s = "ADOBECODEBANC", t = "ABC";
    // c >> s;
    // c >> t;
    // int l1 = s.length(), l2 = t.length();

    int len = INT_MAX, start = 0, j = 0, count = t.length();
    vector<int> now(125);
    for (auto c : t)
        now[c]++;
    for (int i = 0; i < s.length(); i++)
    {
        if (now[s[i]] > 0)
            count--;
        now[s[i]]--;
        while (!count and i >= j)
        {
            if (i - j + 1 < len)
            {
                len = i - j + 1;
                start = j;
                cout << i << "  " << j << " " << len << endl;
            }
            now[s[j]]++;
            if (now[s[j++]] > 0)
                count++;
        }
    }
}