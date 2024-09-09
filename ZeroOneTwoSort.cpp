#include <bits/stdc++.h>
using namespace std;

void myfun(vector<int> &arr)
{
    int n = arr.size();
    int l = 0, m = 0, h = n - 1;
    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr[l], arr[h]);
            h--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 0, 2, 1, 0, 1, 2, 1, 2};
    myfun(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}