//https://practice.geeksforgeeks.org/problems/two-numbers-with-sum-closest-to-zero1737/1#
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            int mn=INT_MAX;
            sort(arr,arr+n);
            int i=0,j=n-1;
                   
            while(i<j)
            {
                int sum=arr[i]+arr[j];
                
                
                if(abs(sum) == abs(mn)){
                    if(mn < sum) mn = sum;
                }
                 if(abs(sum) < abs(mn)) mn = sum;
                if(sum == 0) break;
                else if(sum > 0) j--;
                else i++;
            }
            return mn;
            
        }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends