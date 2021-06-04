/*
 * @lc app=leetcode id=60 lang=cpp
 *
 * [60] Permutation Sequence
 */

// @lc code=start
class Solution {
public:
    string getPermutation(int n, int k) {
        string res="";
        vector<int>v;
        int total=1;
        for(int i=1;i<n;i++)
        {
            total*=i;
            v.push_back(i);
        }
        v.push_back(n);
        k--;
        while(true)
        {
            res+=to_string(v[k/total]);
            v.erase(v.begin()+(k/total));// remove the selected character from the vector;
            if(v.size()==0){break;}
            k=k%total;
            total=total/v.size();
        }
        return res;
        
    }
};
// @lc code=end

