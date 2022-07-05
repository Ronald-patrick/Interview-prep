#include <bits/stdc++.h>
using namespace std;

// Recursive approach
int cpow(int x,int n)
{
    if(n == 0)
    return 1;

    int temp = cpow(x,n/2);
    temp = temp * temp;
    if(n % 2 == 0)
    return temp;
    else
    return temp * x;
}

// Iterative approach (Binary exponentiation)
/*
    5 =  0 1 0 1
    4 ^ 5 = 4 ^ 4 * 4 ^ 1 ;  
    O (logn)
*/

int ipow(int x ,int n)
{
    int res = 1;
    while(n>0)
    {
        if(n & 1)
            res = res * x;
        
        x = x * x;
        n = n >> 1;
    }
    return res;
}

int main()
{
    cout<<cpow(4,5)<<endl;
    cout<<ipow(4,5)<<endl;
    return 0;
}