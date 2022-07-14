#include<bits/stdc++.h>
using namespace std;

/*

(k+1)-th person in the original circle is now the first person.
n-th person in the original circle is now (n-k)-th person.
1-st person in the original circle is now (n-k+1)-th person.
(k-1)-th person in the original circle is now (n-1)-th person.

*/
int jos(int n,int k)
{
    if(n==1)
    return 1;

    return (jos(n-1,k) + k-1 ) % n + 1;
}
int main()
{
    cout<<jos(7,3);
 
    return 0;
}