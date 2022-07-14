#include <bits/stdc++.h>
using namespace std;

int ternary_search(vector<int> arr, int x)
{
    int l = 0;
    int r = arr.size() - 1;
    int mid1,mid2;

    while (l <= r)
    {
        mid1 = l + (r - l) / 3;
        mid2 = r - (r - l) / 3;

        if(arr[mid1] == x)
        return mid1;

        if(arr[mid2] == x)
        return mid2;

        if(x < arr[mid1])
        {
            r = mid1-1;
        }
        else if(x > arr[mid2])
        {
            l = mid2 + 1;
        }
        else
        {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
    cout << ternary_search(arr, 40);

    return 0;
}