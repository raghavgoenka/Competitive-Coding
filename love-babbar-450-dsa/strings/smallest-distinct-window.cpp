//https://practice.geeksforgeeks.org/problems/smallest-distant-window3132/1#
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    string findSubString(string str)
    {
        int n=str.size();
        if(n==1){return "1";}
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){mp[str[i]]++;}
        int ch=mp.size();
       
        mp.clear();
        int res=INT_MAX;
        string s="",re="";
        int j=0;
        for(int i=0;i<=n-ch;i++)
        { 
            if(mp.size()==ch)
            { 
                
                if((j-i)<res)
                    {re=s;}
                    res=min(res,(j-i));
                    mp[str[i]]--;
                    if(mp[str[i]]==0){mp.erase(str[i]);}
                    s=s.erase(0,1);
                  
                    continue;
            }
           
         while(j<n)
            {
               
              s+=str[j];
              mp[str[j]]++;
              if(mp.size()==ch)
              {   
                   if((j-i)+1<res)
                    {re=s;}
                    res=min(res,(j-i)+1);
                    mp[str[i]]--;
                    if(mp[str[i]]==0){mp.erase(str[i]);}
                    s=s.erase(0,1);
                  
                    
                    j++;
                  break;
              }
              j++;
            }
            
          
           
          
        }

        return re;
        
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str).size() << endl;
    }
    return 0;
}  // } Driver Code Ends