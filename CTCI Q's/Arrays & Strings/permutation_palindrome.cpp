#include<bits/stdc++.h>
using namespace std;
 
bool ispermutation_palindrome(string p)
{
    int countOdd = 0;
    int table[26] = {0};
    for(char c : p)
    {
        int x = c - 'a';
        if(x < 0)
        continue;
        table[x]++;
        if(table[x] % 2 == 1)
        countOdd++;
        else
        countOdd--;
    }
    if(countOdd<=1)
    return true;
    return false;
}

int main()
{
    string p = "tact coa";
    bool ans = ispermutation_palindrome(p);
    cout<<ans;
    return 0;
}