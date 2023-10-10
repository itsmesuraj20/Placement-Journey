#include <iostream>
using namespace std;

int fib(int n, int dp[]);

int main()
{
    int number;
    cin >> number;
    
    int dp[number + 1];
    for (int i = 0; i <= number; i++) {
        dp[i] = -1;
    }
    
    cout << fib(number) << endl;
    
    return 0;
}

int fib(int n)
{
    int dp[n+1];
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];

    }
    return dp[n];
}
