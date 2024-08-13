#include <bits/stdc++.h>
using namespace std;

int getRandomNumber(int low, int high)
{
    random_device rd;                            // Obtain a random number from hardware
    mt19937 gen(rd());                           // Seed the generator
    uniform_int_distribution<> distr(low, high); // Define the range

    return distr(gen); // Generate the number
}

void quick_sort(int *a, int l, int r)
{
    if (l >= r) // Base case: If the array is empty or has only one element, return
        return;

    int pivotIndex = getRandomNumber(l, r); // Get a random pivot index
    int pivotValue = a[pivotIndex];
    swap(a[pivotIndex], a[r]); // Move pivot to end for partitioning

    int storeIndex = l;

    for (int i = l; i < r; i++) // Time Complexity: O(n)
    {
        if (a[i] < pivotValue)
        {
            swap(a[i], a[storeIndex]);
            storeIndex++;
        }
    }

    swap(a[storeIndex], a[r]); // Move pivot to its final place

    quick_sort(a, l, storeIndex - 1); // Recursively sort elements before pivot
    quick_sort(a, storeIndex + 1, r); // Recursively sort elements after pivot
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a[n];
    cout << "Enter n elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quick_sort(a, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
