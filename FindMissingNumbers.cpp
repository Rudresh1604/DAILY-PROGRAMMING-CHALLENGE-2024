#include <bits/stdc++.h>
using namespace std;

long myfun(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] + 1 != nums[i])
        {
            cout << nums[i - 1] + 1 << endl;
            break;
        }
    }
    return 0;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5};
    myfun(arr);
}