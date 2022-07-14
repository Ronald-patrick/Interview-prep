#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int dp[N];

int fib(int n)
{
    if(dp[n] !=-1)
    return dp[n];

    int res;
    if (n == 0 || n == 1)
        return n;

    else
        return dp[n] = fib(n - 1) + fib(n - 2);
}
int main()
{
    memset(dp, -1, sizeof(dp));
    cout << fib(10);
    cout<<dp[0]<<" "<<dp[1];
    return 0;
}