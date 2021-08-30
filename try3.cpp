
#include <bits/stdc++.h>
// #include <boost/lexical_cast.hpp>// for lexical_cast()
// string stri = to_string(i_val);
using namespace std;

const int num = 7;

#define loop(i, n) for (int i = 0; i < n; i++)

class BixTeam
{
    int x, y;

public:
    BixTeam(int xx)
    {
        x = ++xx;
    }
    void Display()
    {
        cout << --x << " ";
    }
};
int main()
{
    BixTeam objBT(45);
    objBT.Display();
    BixTeam *p = &objBT;
    *p = 23;
    objBT.Display();
    return 0;
}