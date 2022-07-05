#include<bits/stdc++.h>
using namespace std;

/* 
    Approach 1 : Sort strings and check
    Approach 2 : Check character counts
*/
bool check_permutation(string s,string t)
{
    if(s.length()!=t.length())
    return false;

    int letters[128] = {0};

    for(char c: s)
    letters[c]++;

    for(char c : t)
    {
        letters[c]--;
        if(letters[c] < 0)
        return false;
    }

    return true;
}

int main()
{
    string s = "abcc";
    string t = "caba";

    cout<<check_permutation(s,t);
 
    return 0;
}