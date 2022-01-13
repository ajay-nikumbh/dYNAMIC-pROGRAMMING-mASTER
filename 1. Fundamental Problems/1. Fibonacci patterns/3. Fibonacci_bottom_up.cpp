#include <iostream>
using namespace std;


// 3. Fibonacci bottom up approach {Keep computing from down} 
// Time: o(n) 
// Space: o(n) -> Call stack space
int fib_bottom(int n)
{
    // 1. Array declaration
    int dp[100]={0};

    // 2. Base case filling
    dp[0] =0;
    dp[1] =1;

    // 3. Computing ans 
    for(int i=2;i<=n;i++)
    {
        dp[i] =dp[i-1]+dp[i-2];
    }

    // 4. Return ans
    return dp[n];
} 

int main() 
{
    
    cout<<fib_bottom(10);
}
