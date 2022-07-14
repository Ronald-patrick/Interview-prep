#include <bits/stdc++.h>
using namespace std;
const int N = 1e4;
int dp[N][N];

// Tabulation

int lcstable(string s1, string s2, int n, int m)
{
    int tab[n+1][m+1];

    for(int i = 0;i<=n;i++)
    {
        tab[i][0] = 0;
    }

    for(int j = 0;j<=m;j++)
    {
        tab[0][j] = 0;
    }

    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1] )
            {
                tab[i][j] = 1 + tab[i-1][j-1];
            }
            else
            tab[i][j] = max(tab[i][j-1],tab[i-1][j]);
        }
    }
    return tab[n][m];
}

// Memoization
/* 
    Recursion : 
    
    int lcs(string s1, string s2, int n, int m)
    {
        if(n==0 || m==0 )
        return 0;

        if(s1[n-1] == s2[m-1])
        return 1 + lcs(s1,s2,n-1,m-1);

        return max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
    }
*/
int lcs(string s1, string s2, int n, int m)
{
    if (dp[n][m] != -1)
        return dp[n][m];

    if (n == 0 || m == 0)
        dp[n][m] = 0;

    else
    {
        if (s1[n - 1] == s2[m - 1])
        {
            dp[n][m] =  1 + lcs(s1, s2, n - 1, m - 1);
        }
            
        else
            dp[n][m] =  max(lcs(s1, s2, n - 1, m), lcs(s1, s2, n, m - 1));
    }

    return dp[n][m];
}

void printLcs(string s1,string s2){
    string s;
    int n = s1.size();
    int m = s2.size();
    int pos = 0;
    while(n!=0 && m!=0)
    {
        if(s1[n-1] == s2[m-1])
        {
            s.push_back(s1[n-1]);
            n--;
            m--;
        }
        else if(dp[n-1][m] > dp[n][m-1]){
            n--;
        }
        else
        m--;
    }
    reverse(s.begin(),s.end());
    cout<<s;
}
int main()
{
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    int n = s1.size();
    int m = s2.size();
    memset(dp, -1, sizeof(dp));
    cout << lcs(s1, s2, n, m)<<endl;
    // cout<<lcstable(s1,s2,n,m);

    printLcs(s1,s2);
    return 0;
}