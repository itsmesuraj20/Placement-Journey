#include <iostream>
using namespace std;

int fib(int n, int dp[]);

int main()
{
    int number;
    cin >> number;
    
    // Create an array to store Fibonacci values up to 'number'
    int dp[number + 1];
    for (int i = 0; i <= number; i++) {
        dp[i] = -1;
    }
    
    cout << fib(number, dp) << endl;
    
    return 0;
}

int fib(int n, int dp[])
{
    if (dp[n] == -1)
    {
        int res;
        if (n == 0 || n == 1)
        {
            res = n;
        }
        else
        {
            res = fib(n - 1, dp) + fib(n - 2, dp);
        }
        dp[n] = res;
    }

    return dp[n];
}
