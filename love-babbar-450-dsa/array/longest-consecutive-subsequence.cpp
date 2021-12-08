//https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      sort(arr,arr+N);
      int mx=1;
      int s=arr[0],c=1;
      for(int i=1;i<N;i++)
      {   if(arr[i]==arr[i-1]){continue;}
           if(arr[i]==s+1){c++;}
           else{ mx=max(c,mx); c=1;}
           s=arr[i];
          
           
      } 
      mx=max(mx,c);
      return mx;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends