#include <iostream>
using namespace std;

int bubble(int a[], int n)
{
    int numSwaps{};
    for(int i{0}; i<n; i++)
    {
        for(int j{0}; j<n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                numSwaps++;
            }
        }
    }
    return numSwaps;
}
int main()
{
    int n{},firstElement{},lastElement{};
    cout << "Enter the number of elements in the array\n";
    cin >> n;
    int a[n];
    cout << "Enter the elements\n";
    for(int i{0}; i<n; i++)
    {
        cin >> a[i];
    }
    cout << "\nArray is sorted in " << bubble(a,n) << " swaps.\n";
    firstElement = a[0];
    lastElement = a[n-1];
    cout << "First element: " << firstElement << endl;;
    cout << "Last element: " << lastElement << endl;;
    return 0;
}