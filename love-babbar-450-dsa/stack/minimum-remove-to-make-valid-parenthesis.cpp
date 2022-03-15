//https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/



class Solution {
public:
    string minRemoveToMakeValid(string str) {
        stack<int>s; string res="";
        
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='('){s.push(i);}
            else if(str[i]==')')
            {
                if(!s.empty()&&str[s.top()]=='('){s.pop();}
                else{str[i]='1';}
                 
            }
        }
        while(!s.empty())
        {
            str[s.top()]='1';
            s.pop();
        }
        
        for(auto i:str)
        {
            if(i!='1'){res+=i;}
        }
       return res;
        
    }
};