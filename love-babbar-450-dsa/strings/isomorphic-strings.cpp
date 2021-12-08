//https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        char hash[256]; 
        int n1 = str1.size();
        int n2 = str2.size();
        
        // Checking Base case 
        if(n1 != n2){
            return false;
        }
        
        // checking str1 to str2 mapping
        for(int i=0;i<n1;i++){
            hash[str1[i]] = str2[i];
        }
        for(int i=0;i<n1;i++){
            if(str2[i] != hash[str1[i]]){
                return false;
            }
        }
        
        // checking str2 to str1 mapping
        for(int i=0;i<n1;i++){
            hash[str2[i]] = str1[i];
        }
        for(int i=0;i<n1;i++){
            if(str1[i] != hash[str2[i]]){
                return false;
            }
        }
        
        return true;
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends