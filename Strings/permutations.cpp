#include <bits/stdc++.h>
using namespace std;

void solve(string s, set<string> &ans, int index)
{
    if (index >= s.size())
    {
        ans.insert(s);
        return;
    }

    for (int j = index; j < s.size(); j++)
    {
        swap(s[index], s[j]);
        solve(s, ans, index + 1);
        swap(s[index], s[j]);
    }
}

vector<string> find_permutation(string S)
{
    set<string> ans;
    int index = 0;
    solve(S, ans, index);
    vector<string> res;
    for (auto i : ans)
        res.push_back(i);
    return res;
}


int main()
{
    auto vec = find_permutation("ABC");
    for(auto it : vec)
    {
        cout<<it<<" ";
    }
    return 0;
}