#include <bits/stdc++.h>
using namespace std;

vector<int> search_range(vector<int> arr,int x)
{
    vector<int> ans;
    int l = 0,r = arr.size() - 1,mid;
    while(l<=r)
    {
        mid = l + (r-l) / 2;
        if((mid == 0 || x > arr[mid-1]) && arr[mid] == x)
        {
            ans.push_back(mid);
            break;
        }
        else if(x > arr[mid])
        l = mid + 1;
        else
        r = mid - 1;
    }

    l = 0;
    r = arr.size() - 1;
    while(l<=r)
    {
        mid = l + (r-l) / 2;
        if((mid == arr.size() - 1 || x < arr[mid+1]) && arr[mid] == x)
        {
            ans.push_back(mid);
            break;
        }
        else if(x < arr[mid])
        r = mid - 1;
        else
        l = mid + 1;
    }

    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40,40,40,40, 50, 60, 70};
    auto arx =  search_range(arr, 40);
    cout<<arx[0]<<" "<<arx[1];
    return 0;
}