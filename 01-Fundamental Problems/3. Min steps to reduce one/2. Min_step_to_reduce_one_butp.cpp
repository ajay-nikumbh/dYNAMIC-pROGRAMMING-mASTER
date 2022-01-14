#include <bits/stdc++.h>
using namespace std;

// Min steps to one using bottom up approach
// Time: o(n)
// Space: o(n)

int min_steps_to_one(int n)
{   
    int dp[100] ={0};
    dp[1] =0;

    for(int i=2;i<=n;i++)
    {
        int op1,op2,op3;
        op1=op2=op3= INT_MAX;

        if(n%3==0) op1= dp[i/3];
        if(n%2==0) op2= dp[i/2];
        op3= dp[i-1];

        dp[i] =min(op1, min(op2,op3))+1;

    }
    return dp[n];
    
}

int main() 
{
    cout<<min_steps_to_one(9);
}
