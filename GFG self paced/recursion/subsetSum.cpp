#include<bits/stdc++.h>
using namespace std;

int subsetSum(int arr[],int n,int sum)
{
    if(n == 0)
        return sum == 0 ? 1 : 0;

    return subsetSum(arr,n-1,sum) + subsetSum(arr,n-1,sum - arr[n-1]);
}

int main()
{
    int arr[] = {10,20,15};
    cout<<subsetSum(arr,3,25);
    return 0;
}