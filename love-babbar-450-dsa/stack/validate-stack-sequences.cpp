//https://leetcode.com/problems/validate-stack-sequences/

class Solution {
public:
    bool validateStackSequences(vector<int>& push, vector<int>& pop) {
        int j=0,i=0;
        int m=pop.size(),n=push.size();
        stack<int>s;
        s.push(push[i]);
        i++;
        while(i<n)
        {   
            while(!s.empty()&&s.top()!=pop[j]&&i<n)
            {
                s.push(push[i]);
                i++;
            }
            if(s.empty()){s.push(push[i]);i++;}
            
            while((!s.empty()&&s.top()==pop[j])&&j<m){s.pop();j++;}
            
        }
    while((!s.empty()&&s.top()==pop[j]&&j<m)){s.pop();j++;}
        
        return s.empty();
        
     }
};