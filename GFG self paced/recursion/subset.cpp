#include<bits/stdc++.h>
using namespace std;

void powerSet(string s,int index = 0,string curr = "")
{
    if(index == s.size())
    {
        cout<<curr<<" ";
        return;
    }

    powerSet(s,index+1,curr + s[index]);
    powerSet(s,index+1,curr);

} 

int main()
{
    string k = "abc";
    powerSet(k);
    return 0;
}