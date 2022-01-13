#include <bits/stdc++.h>
using namespace std;

// Min steps to one 
// Time: o(n)
// Space: o(n)

int min_steps_to_one(int n, int dp[])
{
    // 1. Base case
    if(n==1) return 0;

    // 2. Lookup
    if(dp[n]!=0) return dp[n];

    // 3. Compute for the first time
    int op1,op2,op3;
    op1= op2 =op3= INT_MAX;
    
    if(n%3==0) op1= min_steps_to_one(n/3, dp)+1;
    if(n%2==0) op2 =min_steps_to_one(n/2 ,dp)+1;
    op3 =min_steps_to_one(n-1,dp)+1;
    int ans= min(op1, min(op2,op3));
    
    // 4. Return the answer
    return dp[n] =ans;

}

int main() 
{
    int dp[100]={0};
    cout<<min_steps_to_one(10,dp);
}
