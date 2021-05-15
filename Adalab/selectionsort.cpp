#include <bits/stdc++.h>
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void SwapValue(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}
int *selection_sort(int arr[100], int n)
{
    for (size_t i{}; i < n - 1; i++)
    {
        int min = i;
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[i], arr[min]);
        }
    }
    return arr;
}
int main()
{
    int n, arr[100];
    cout << "Enter the number of Elements : ";
    cin >> n;
    cout << "Enter the Elements : ";
    for (size_t i{}; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Unsorted Array -> ";
    for (size_t i{}; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    auto start = high_resolution_clock::now();
    cout << "\nSorted Array -> ";
    int *sorted_arr = selection_sort(arr, n);
    for (size_t i{}; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken in sorting: "
         << duration.count() << " microseconds" << endl;
    return 0;
}