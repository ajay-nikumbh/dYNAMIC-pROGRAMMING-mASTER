#include <iostream>
using namespace std;


// 1. Fibonacci recursion approach 
// Time: o(2^n) 
// Space: o(n) -> Call stack space

int fib(int n)
{
    if(n==0 ) return 0;
    if(n==1)  return 1;

    return fib(n-1)+fib(n-2);
} 

int main() 
{
    cout<<fib(10);
}
