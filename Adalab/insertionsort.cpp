#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int c=0;
void insertion_sort(int arr[], int n)
{for (int i=0; i < n; i++)
    {int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            c++;
            j--;
        }
        arr[j + 1] = temp;
 }}
int main()
{
    int n, arr[100];
    cout << "Enter the number of Elements : ";
    cin >> n;
    cout << "Enter the Elements : ";
    for (int i=0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Sorted Array: ";
   insertion_sort(arr, n);
    for (int i=0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\nNumber of swaps "<<c<<"\n";
    return 0;
}