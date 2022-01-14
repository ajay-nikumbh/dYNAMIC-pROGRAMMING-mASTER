#include <bits/stdc++.h>
using namespace std;

// Wines problem top down solution
// Time: o(n^2)
// Space: o(n) 


int wines_sell(int wines[], int i,int j,int y, int dp[][100])
{
    // 1. Base case hit
    if(i>j) return 0;

    // 2. Look up
    if(dp[i][j]!=0) return dp[i][j];
    
    // 3. Recursive case
    int op1, op2;
    op1= wines[i]*y + wines_sell(wines, i+1, j, y+1,dp);
    op2= wines[j]*y + wines_sell(wines, i, j-1, y+1,dp);
    return  dp[i][j]= max(op1,op2);  
}

int main() 
{
    int wines[]={2,3,5,1,4};
    int dp[100][100] ={0};
    int y=1;
    int n = sizeof(wines)/ sizeof(int);
    cout<<wines_sell(wines, 0,n-1,y, dp);
}
