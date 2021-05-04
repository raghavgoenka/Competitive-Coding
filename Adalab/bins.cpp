#include <bits/stdc++.h>

using namespace std;
long int binarySearch(long int arr[], long int l, long int r, long int x)
{
    if (r >= l)
    {
        long int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main()
{
clock_t begin = clock();

    float  time;
    long n, key;
    cout << "Enter the size of array" << endl;
    cin >> n;
    long int a[n];
    cout << "Element in array are "
         << "\n";
    for (long i = 0; i < n; i++)
    {
        a[i] =(rand()%1000);
    }
    for (long i = 0; i < n; i++)
    {
        sort(a, a + n);
        cout << a[i] << endl;
    }

    cout << "Enter the element to be searched" << endl;
    cin >> key;
    
    
    
 



long index = binarySearch(a, 0, n - 1, key);
 std::this_thread::sleep_for(1000ms);

begin = clock()- begin;
    
    if (index == -1)
    {
        cout << "Elelment is not present in the array"
             << "\n";
    }
    else
    {
        cout << "Elelment is present in the array at " << index << "\n";
    }
    
    cout << "time taken " << (float)begin/CLOCKS_PER_SEC << "\n";
    return 0;
}