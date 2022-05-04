//https://leetcode.com/problems/total-appeal-of-a-string/
class Solution {
public:
    long long appealSum(string s) {
        int n = s.size();
	long long ans = 0, lastindex[26] = {0};
	long long  dp=0;

	for (int i = 1; i <= n; ++i) {
        
		dp=dp+i - lastindex[s[i-1]-'a'];
       
		lastindex[s[i-1]-'a'] = i;
		ans+=dp;
		
	}
        
	return ans;
    }
};