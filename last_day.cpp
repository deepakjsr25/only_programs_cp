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

//*max_element(v.begin() , v.end())
//rotate(v.begin() , v.begin() + n/2 ,v.end())

int latestDayToCros(int, int, vector<vector<int>>);
int crossendtoend(int, int, vector<vector<int>>);

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> cells(row * col);

    loop(i, row * col)
    {
        loop(j, 2)
        {
            int a;
            cin >> a;
            cells[i].push_back(a);
        }
    }

    // cout << cells.size() << " " << cells[0].size() << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << latestDayToCros(row, col, cells);
}

int latestDayToCros(int row, int col, vector<vector<int>> cells)
{
    vector<vector<int>> v(row + 1, vector<int>(col + 1, 0));

    int days = 0;

    for (int i = 0; i < cells.size(); i++)
    {
        v[cells[i][0]][cells[i][1]] = 1;
        int k = 0;

        for (int j = 1; j <= col; j++)
        {
            cout << endl;
            cout << endl;
            cout << endl;

            if (v[1][j] != 1)
            {
                k = crossendtoend(1, j, v); //(1,1,v)
                cout << endl;
                cout << endl;
                cout << k << endl;
                if (k == 1)
                    break;
            }
        }

        if (k == 0)
            break;

        days++;
    }

    return days;
}

int crossendtoend(int row, int col, vector<vector<int>> vec)
{
    cout << row << " " << col << endl;
    int down = 0;
    int left = 0;
    int right = 0;

    vec[row][col] = 1;

    if (row == vec.size() - 1)
        return 1;

    if ((row + 1) <= (vec.size() - 1) && vec[row + 1][col] == 0)
        down = crossendtoend(row + 1, col, vec);

    if (down == 0 && (col - 1) > 0 && vec[row][col - 1] == 0)
        left = crossendtoend(row, col - 1, vec);

    if (down == 0 && left == 0 && (col + 1) <= (vec[0].size() - 1) && vec[row][col + 1] == 0)
        right = crossendtoend(row, col + 1, vec);

    return down || right || left;
}

// [[4,2],[6,2],[2,1],[4,1],[6,1],[3,1],[2,2],[3,2],[1,1],[5,1],[5,2],[1,2]]

// 6 2
// 4 2
// 6 2
// 2 1
// 4 1
// 6 1
// 3 1
// 2 2
// 3 2
// 1 1
// 5 1
// 5 2
// 1 2