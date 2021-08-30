#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
template <class Fun>
class y_combinator_result
{
    Fun fun_;

public:
    template <class T>
    explicit y_combinator_result(T &&fun) : fun_(std::forward<T>(fun)) {}
    template <class... Args>
    decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template <class Fun>
decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef NEAL_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

struct union_find
{
    // When data[x] < 0, x is a root and -data[x] is its tree size. When data[x] >= 0, data[x] is x's parent.
    vector<int> data;
    int components = 0;

    union_find(int n = -1)
    {
        if (n >= 0)
            init(n);
    }

    void init(int n)
    {
        data.assign(n + 1, -1);
        components = n;
    }

    int find(int x)
    {
        return data[x] < 0 ? x : data[x] = find(data[x]);
    }

    int get_size(int x)
    {
        return -data[find(x)];
    }

    bool unite(int x, int y)
    {
        x = find(x);
        y = find(y);

        if (x == y)
            return false;

        if (-data[x] < -data[y])
            swap(x, y);

        data[x] += data[y];
        data[y] = x;
        components--;
        return true;
    }
};

const char BLOCK = '#';
const char EMPTY = '.';

vector<array<int, 2>> generate_pairs(const string &str)
{
    int n = int(str.size());
    vector<array<int, 2>> pairs;

    for (int i = 0, j = 0; i < n; i = j)
    {
        while (j < n && (str[i] == BLOCK) == (str[j] == BLOCK))
            j++;

        for (int a = i, b = j - 1; a < b; a++, b--)
            pairs.push_back({a, b});
    }

    return pairs;
}

void run_case(int test_case)
{
    int N, M;
    cin >> N >> M;
    vector<string> grid(N);

    for (auto &row : grid)
        cin >> row;

    auto get_index = [&](int r, int c) -> int
    {
        return r * M + c;
    };

    union_find UF(N * M);

    for (int r = 0; r < N; r++)
    {
        vector<array<int, 2>> pairs = generate_pairs(grid[r]);

        for (auto &pr : pairs)
            UF.unite(get_index(r, pr[0]), get_index(r, pr[1]));
    }

    for (int c = 0; c < M; c++)
    {
        string column;

        for (int r = 0; r < N; r++)
            column += grid[r][c];

        vector<array<int, 2>> pairs = generate_pairs(column);

        for (auto &pr : pairs)
            UF.unite(get_index(pr[0], c), get_index(pr[1], c));
    }

    vector<char> value(N * M, EMPTY);

    for (int r = 0; r < N; r++)
        for (int c = 0; c < M; c++)
            if (grid[r][c] != BLOCK && grid[r][c] != EMPTY)
                value[UF.find(get_index(r, c))] = grid[r][c];

    int changed = 0;

    for (int r = 0; r < N; r++)
        for (int c = 0; c < M; c++)
            if (grid[r][c] == EMPTY && value[UF.find(get_index(r, c))] != EMPTY)
            {
                changed++;
                grid[r][c] = value[UF.find(get_index(r, c))];
            }

    cout << "Case #" << test_case << ": " << changed << '\n';

    for (auto &row : grid)
        cout << row << '\n';
}

int main()
{
    int tests;
    cin >> tests;

    for (int tc = 1; tc <= tests; tc++)
    {
        run_case(tc);
        cout << flush;
    }
}
