#include <bits/stdc++.h>
using namespace std;
int number_of_pairs(vector<int> &arr)
{
    int n = arr.size();
    vector<bool> seats(arr[0] + 1, true);
    for (int i = 0; i < n; i++)
        seats[arr[i]] = false;
    int cp = 0;
    n = arr[0] + 1;
    for (int i = 1; i < n - 2; i += 2)
    {
        if (seats[i] == true && seats[i + 1] == true)
            cp += 1;
        if (seats[i] == true && seats[i + 2] == true)
            cp += 1;
        if (seats[i + 1] == true && seats[i + 2] == true)
            cp += 1;
    }
    if (seats[n - 1] == true && seats[n] == true)
        cp += 1;
    return cp;
}
int main()
{
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "Number of pairs: " << number_of_pairs(arr);
}
