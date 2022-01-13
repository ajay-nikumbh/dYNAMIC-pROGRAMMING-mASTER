#include <bits/stdc++.h>
using namespace std;

// Min coins top down dynamic programming
// Time: o(n)
// Space: o(n) 

int min_coins(int n ,int coins[], int t, int dp[] )
{
    // 1. Base case hit
    if(n==0) return 0;

    // 2. Look up
    if(dp[n]!=0) return dp[n];

    // 3. Recursion computation of problem
    int ans = INT_MAX;
    for(int i=0;i<t;i++)
    {
        if(n-coins[i]>=0)
        {
            int subprob= min_coins(n-coins[i], coins, t,dp);
            ans= min(ans,subprob+1);
        }

    }
    dp[n] =ans;
    return dp[n];
}

int main() 
{
    int n=15;
    int coins[]= {1,7,10};
    int dp[100]={0};
    int t= sizeof(coins)/sizeof(int);
    cout<<min_coins(n,coins,t,dp);
}
