#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ip, op;
    cout << "Enter Input string : ";
    cin >> ip;
    unordered_map<char, int> values;
    vector<char> stack;
    for (char c : ip)
    {
        if (isalpha(c))
        {
            op += c;
            values[c] = 0;
        }
    }
    cout << ip;
    return 0;
}