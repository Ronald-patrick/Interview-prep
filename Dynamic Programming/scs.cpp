#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[1001][1001];
    
//     int lcs(string &s1,string &s2,int n,int m)
//     {
//         if(dp[n][m] != -1)
//             return dp[n][m];
        
//         if(n == 0 || m == 0)
//             return dp[n][m] = 0;
        
//         if(s1[n-1] == s2[m-1])
//             return dp[n][m] =  1 + lcs(s1,s2,n-1,m-1);
        
//         return max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
        
//     }
    
    int lcs(string s1,string s2,int n,int m)
    {
        for(int i = 0;i<=n;i++)
        {
            dp[i][0] = 0;
        }
        for(int i = 0;i<=m;i++)
        {
            dp[0][i] = 0;
        }
        
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {
                if(s1[i-1] == s2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
    
        
        return dp[n][m];
        
    }
    string shortestCommonSupersequence(string str1, string str2) {
        memset(dp,-1,sizeof(dp));
        int len = lcs(str1,str2,str1.size(),str2.size());
        
        int n = str1.size();
        int m = str2.size();
        
        string ans = "";
        
        while(n!=0 && m!=0)
        {
            if(str1[n-1] == str2[m-1])
            {
                ans.push_back(str1[n-1]);
                n--;
                m--;
            }
            else if(dp[n-1][m] >= dp[n][m-1])
            {
                ans.push_back(str1[n-1]);
                n--;
            }
            else
            {
                ans.push_back(str2[m-1]);
                m--;
            }
        }
        
        while(n!=0)
        {
            ans.push_back(str1[n-1]);
            n--;
        }
        
        while(m!=0)
        {
            ans.push_back(str2[m-1]);
            m--;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};