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
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);

    int si = nums.size();
    int temp1;
    // cout<<
    int i = 0;
    while (i < si)
    {
        int con = nums[i];
        if ((nums[i] < si) && (nums[i] != nums[con]))
        {
            temp1 = nums[i];
            nums[i] = nums[con];
            nums[con] = temp1;
            cout << nums[i] << " " << nums[con] << " " << temp1 << endl;
        }
        else
            i++;
    }

    int k;
    for (k = 0; k < si; k++)
    {
        cout << nums[k] << " " << k << endl;
        if (nums[k] != k)
            break;
    }

    cout << k;
}