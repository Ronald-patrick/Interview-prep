#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string st,int s = 0,int e){
    if(s == e)
    return true;

    if(st[s] != st[e])
    return false;

    if(s<e)
    return isPalindrome(st,s+1,e-1);

    return true;
} 
int main()
{
    cout<<isPalindrome("abbab",4); 
 
    return 0;
}