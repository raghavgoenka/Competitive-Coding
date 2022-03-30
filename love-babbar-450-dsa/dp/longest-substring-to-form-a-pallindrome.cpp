//https://practice.geeksforgeeks.org/problems/longest-substring-whose-character-rearranged-can-form-a-palindrome/1#


class Solution {
  public:
    int longestSubstring(string s) {
           map<int, int> index;
     
   int n=s.size();
    int answer = 0;
 
    int mask = 0;
    index[mask] = -1;
 
  
    for(int i = 0; i < n; i++)
    {
         
       
        int temp = (int)s[i] - 97;
 
        
        mask ^= (1 << temp);
 

        if (index[mask])
        {
            answer = max(answer,
                         i - index[mask]);
        }
 
      
        else
            index[mask] = i;
 
      
        for(int j = 0; j < 26; j++)
        {
           
            int mask2 = mask ^ (1 << j);
            if (index[mask2])
            {
                answer =max(answer,
                            i - index[mask2]);
            }
        }
    }
    return answer;
    }
};