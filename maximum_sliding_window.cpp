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
     deque<int> dq;
        vector<int> great_nm;
    
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(!dq.empty() && dq.front() == i - k)
                dq.pop_front();
            
            while(!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();
            
            dq.push_back(i);
            if(i >=k-1)
                great_nm.push_back(nums[dq.front()]);
        }
            return great_nm;
}