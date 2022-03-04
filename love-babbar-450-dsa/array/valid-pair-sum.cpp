//https://practice.geeksforgeeks.org/problems/3b76f77c1b2107f809b1875aa9fe929ce320be97/1#
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	sort(a,a+n);
    	long long c=0;
    	int i=0,j=n-1;
    	while(i<j)
    	{
    	    
    	    
    	    int sum=a[i]+a[j];
    	   
    	     if(sum<=0){i++;}
    	      else if(sum>0){c+=j-i;j--;}

    	}
    	return c;
    }   
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 

  // } Driver Code Ends