//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    long int cur,over,sub;
    cur=arr[0];over=arr[0];
   sub=0;

    for(int i=1;i<n;i++)
    {   
        if((arr[i]+cur)>arr[i])
            {cur+=arr[i];
             if(cur>over){over=cur;}
            }
         else{
             cur=arr[i];
        if(cur>over){over=cur;}

         }   
    
    }
    return over;
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends