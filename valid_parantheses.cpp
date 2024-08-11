#include <bits/stdc++.h>
using namespace std;
bool validate(string s)
{
    int n = s.size(), i = 0;
    vector<char> stack;
    while (i < n)
    {
        if (s[i] == '(')
        {
            stack.push_back('(');
        }
        else
        {
            if (stack.size() == 0)
                return false;
            stack.erase(stack.end() - 1);
        }
        i++;
    }
    if (stack.size())
        return false;
    return true;
}
int main()
{
    string s;
    cin >> s;
    cout << validate(s);
}