#include<bits/stdc++.h>
using namespace std;

/*
    This approach uses bits in 32 bit integer
    Only for a to z ( Lowercase )
    1. Convert Character to 0 based indexing int
    2. (1<<val) for giving each character single 1 and 31 zeros Exp A == 001 B == 010
    3. If checker & val returns >0 then not found
    4. put the value in checker with |
*/
bool isUnique_bit(string str)
{
    int checker = 0;
 
    for (int i = 0; i < str.length(); ++i)
    {
        int val = (str[i]-'a');
 
        if ((checker & (1 << val)) > 0)
            return false;
        
        checker = checker | (1 << val);
    }
 
    return true;
}

bool isUnique(string s)
{
    int n = s.length();
    if(s.length() > 128)
    return false;

    bool char_set[128] = {false};

    for(int i=0;i<n;i++)
    {
        int a = s[i];
        if(char_set[a])
        return false;
        
        char_set[a] = true;
    }
    return true;
} 
int main()
{
    string str = "abca";
    // cout<<isUnique(str);
    cout<<isUnique_bit(str);
    return 0;
}