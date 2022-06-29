#include <bits/stdc++.h>
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

int main()
{
    string str = "  hey i am a sentence   ";
    cout<<removeWhiteSpaces(str);
    return 0;
}