//https://leetcode.com/problems/remove-duplicate-letters/submissions/
class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char,int>mp;
        for(auto i:s){mp[i]++;}
        string res="";
        vector<int>vis(26,0);
        for(auto i:s)
        {  
            mp[i]--;
            if(!vis[i-'a']){
            while(res.size()>0&&res.back()>i&&mp[res.back()]>0)
            {
                vis[res.back()-'a']=0;
                res.pop_back();
            }
            res.push_back(i);
                vis[i-'a']=1;
            }
            
        }        

        return res;
        
        
    }
};