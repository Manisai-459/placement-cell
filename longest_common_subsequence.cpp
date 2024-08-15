#include <bits/stdc++.h>
using namespace std;
class longest_sub_sequence
{
public:
    string a, b;
    longest_sub_sequence(string a, string b)
    {
        this->a = a;
        this->b = b;
    }
    int longest_sub_sequence_lookup_table(string a, string b, int m, int n, vector<vector<int>> &dp)
    {
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i - 1] == b[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1]; // dp[i - 1][j - 1] this represents remove the matched characters and check top-left conrner value that gives max length as of then
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]); // dp[i][j - 1] by removing j'th char am I getting max or by removing dp[i - 1][j] i'th character I am gettong maximum
            }
        }
        return dp[m][n];
    }
    int longest_sub_sequence_dp(string a, string b, int m, int n, vector<vector<int>> &dp)
    {
        if (m == -1 || n == -1)
            return 0;
        if (dp[m][n] != -1) // it only takes O(m*n) as in another tree if the same value occures it dont repeat the process, it just takes the value and leave
            return dp[m][n];
        if (a[m] == b[n])
            return dp[m][n] = 1 + longest_sub_sequence_dp(a, b, m - 1, n - 1, dp);
        return dp[m][n] = max(longest_sub_sequence_dp(a, b, m - 1, n, dp), longest_sub_sequence_dp(a, b, m, n - 1, dp));
    }
    int longest_sub_sequence_brute_force(string a, string b, int m, int n)
    {
        // it goes in tree like structure and takes and time complexity of O(2^min(m, n)), min is because this statement gets flase whenever one string lingth is zero
        if (m == 0 || n == 0)
            return 0;
        if (a[m - 1] == b[n - 1])                                            // check if last characters are equal
            return 1 + longest_sub_sequence_brute_force(a, b, m - 1, n - 1); // if equal remove those chars and check for other chars
        return max(longest_sub_sequence_brute_force(a, b, m - 1, n), longest_sub_sequence_brute_force(a, b, m, n - 1));
        // Ex: ABCD , ABCE | then check for [ ABC, ABCE ] and [ ABCD, ABC ]
    }
};

int main()
{
    string a, b;
    cout << "Enter string 1: ";
    cin >> a;
    cout << "Enter string 2: ";
    cin >> b;
    longest_sub_sequence obj = longest_sub_sequence(a, b);
    //  cout << "Longest sub sequence is of : " << obj.longest_sub_sequence_brute_force(a, b, a.size(), b.size());
    // vector<vector<int>> dp(a.size(), vector<int>(b.size(), -1));
    // cout << "Longest sub sequence is of : " << obj.longest_sub_sequence_dp(a, b, a.size() - 1, b.size() - 1, dp);
    vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, 0));
    cout << "Longest sub sequence is of : " << obj.longest_sub_sequence_lookup_table(a, b, a.size(), b.size(), dp) << endl;
    return 0;
}