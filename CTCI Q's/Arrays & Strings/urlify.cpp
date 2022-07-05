#include<bits/stdc++.h>
using namespace std;

string removeWhiteSpaces(string s)
{
    int i = 0;
    while (s[i] == ' ')
        s.erase(s.begin());

    i = s.size() - 1;

    while (s[i] == ' ')
    {
        s.erase(s.end() - 1);
        i = s.size() - 1;
    }

    return s;
}

string urlify(string t){
    string rep = "%20";
    string mt = removeWhiteSpaces(t);
    for(int i=0;i<t.size();i++)
    {
        if(mt[i] == ' ')
        mt.replace(i,1,rep);
    }
    return mt;
}

int main()
{
    string t = "Mr John Smith   ";
    cout<<urlify(t);
    return 0;
}