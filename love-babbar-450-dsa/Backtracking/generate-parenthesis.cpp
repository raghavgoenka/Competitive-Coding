//https://leetcode.com/problems/generate-parentheses/submissions/
//https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1
class Solution {
public:
    
    vector<string>res;
    void generate(string temp,int open,int close,int n)
    {
        cout<<temp<<endl;
        if(open==n&&close==n){cout<<temp<<"in"<<endl;res.push_back(temp);return ;}
        
        if(open<n){
            temp+='(';
            generate(temp,open+1,close,n);
            temp.pop_back();
        }
        if(close<n)
        {
            if(close<open)
            {
              temp+=')';
            generate(temp,open,close+1,n);
            temp.pop_back();  
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        
        generate("",0,0,n);
        return res;
    }
};