#include <bits/stdc++.h>
using namespace std;
;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<string> arr;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        arr.push_back(x);
    }
    int p;
    cin >> p;
    if (p < n - 1)
    {
        int carr[n];
        string m = arr[0];
        for (int i = 1; i < n; i++)
        {
            int count[127] = {0}, cc = 0;
            string x = m, y = arr[i];
            for (int k = 0; k < x.length(); k++)
            {
                if (count[x[k]] == 0)
                {
                    for (int l = 0; l < y.length(); l++)
                    {
                        if (x[k] == y[l])
                        {

                            count[x[k]] += 1;
                        }
                    }
                }
            }
            // for (int k = 0; k < 127; k++)
            // {
            //     cout << count[k] << endl;
            // }
            for (int k = 0; k < 127; k++)
                cc += count[k];
            carr[i] = cc;
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (carr[i] > carr[j])
                {
                    string x = arr[i];
                    arr[i] = arr[j];
                    arr[j] = x;
                    carr[i] = carr[j] + carr[i] - (carr[j] = carr[i]);
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            cout << arr[i] << " " << carr[i] << endl;
        }
        // for (int i = 1; i < n; i++)
        // {
        //     cout << arr[i] << endl;
        // }
        int i, j, a, b;
        i = 1;
        j = p;
        a = n - 1 - (p - 1);
        if (a <= j)
        {
            int t = a;
            a = j + 1;
            j = t - 1;
        }
        cout << i << " " << j << endl;
        cout << a << " " << n - 1 << endl;
        for (int s = a; s < n; s++)
            cout << arr[s] << endl;
        for (int s = i; s <= j; s++)
            cout << arr[s] << endl;
        }
    else
    {
        printf("No friends");
    }
    return 0;
}
