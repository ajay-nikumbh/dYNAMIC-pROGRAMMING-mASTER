#include <iostream>
using namespace std;


// 2. Fibonacci top down approach {Recursion+ Memoization} 
// Time: o(n) 
// Space: o(n) -> Call stack space
int fib(int n, int dp[])
{
    // 1. Base cases for o and 1
    if(n==0 or n==1) return n;
    

    // 2. Look up in table 
    if(dp[n]!=0) return dp[n];

    // 3. If not in table then compute the answer
    int ans= fib(n-1,dp)+fib(n-2,dp);

    // 4. Store the ans in dp table
    return dp[n]= ans;
} 

int main() 
{
    int dp[100]={0};
    cout<<fib(12,dp);
}
