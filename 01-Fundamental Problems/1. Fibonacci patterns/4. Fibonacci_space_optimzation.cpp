#include <iostream>
using namespace std;


// 4. Fibonacci space optimzation approach 
// Time: o(n) 
// Space: o(1) 
int fib_space_optimzation(int n)
{
    // 1. Base case filling
    int a=0;
    int b=1;
    int c;
    // 2. Computing ans 
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    // 3. Return ans
    return c;
} 

int main() 
{
    
    cout<<fib_space_optimzation(10);
}
