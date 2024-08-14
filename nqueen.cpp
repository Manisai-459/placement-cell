#include <bits/stdc++.h>
using namespace std;

bool is_safe(vector<vector<int>> &b, int row, int col)
{
    int drow = row, dcol = col;

    while (dcol >= 0) // check in the same row
    {
        if (b[drow][dcol])
            return false;
        dcol--;
    }
    drow = row;
    dcol = col;
    while (drow >= 0 && dcol >= 0) // check upper diagonal
    {
        if (b[drow][dcol])
            return false;
        drow--;
        dcol--;
    }
    drow = row;
    dcol = col;
    while (drow < b.size() && dcol >= 0) // check lower diagonal
    {
        if (b[drow][dcol])
            return false;
        drow++;
        dcol--;
    }
    return true;
}

void n_queen(vector<vector<int>> &b, int col)
{
    if (col == b.size())
    {
        for (int i = 0; i < b.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
                if (b[i][j])
                    cout << b[i][j];
                else
                    cout << "_";
            cout << endl;
        }
        cout << "-------------------------------------" << endl;
        return;
    }

    for (int i = 0; i < b.size(); i++)
    {
        if (is_safe(b, i, col)) // Pass the correct row index 'i'
        {
            b[i][col] = 1;
            n_queen(b, col + 1);
            b[i][col] = 0;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of queens required: ";
    cin >> n;
    vector<vector<int>> b(n, vector<int>(n, 0));
    n_queen(b, 0); // Start with column 0
    return 0;
}
