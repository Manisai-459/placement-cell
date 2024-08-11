#include <bits/stdc++.h>
using namespace std;
int fib(int n, unordered_map<int, int> &memo)
{
    if (memo.count(n) != 0)
        return memo[n];
    if (n <= 2)
        return 1;
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}
int main()
{
    unordered_map<int, int> memo;
    cout << fib(50, memo);
    return 0;
}