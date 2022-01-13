#include <bits/stdc++.h>
using namespace std;

// Min coins bottom up dynamic programming
// Time: o(n)
// Space: o(n) 

int min_coins(int N ,int coins[], int t )
{   
     int dp[100]={0};
    for(int n=1;n<=N;n++)
    {
        dp[n]= INT_MAX;
        for(int i=0;i<t;i++)
        {
            if(n-coins[i]>=0)
            {            
                int subprob= dp[n-coins[i]];
                dp[n]= min(dp[n],subprob+1);
            }
        }

    }
    return dp[N];
}

int main() 
{
    int n=15;
    int coins[]= {1,7,10};
   
    int t= sizeof(coins)/sizeof(int);
    cout<<min_coins(n,coins,t);
}
