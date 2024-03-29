//https://leetcode.com/problems/longest-valid-parentheses/
class Solution {
public:
    int longestValidParentheses(string s) {
        int maxans = 0;
      stack<int>ss;
        ss.push(-1);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                ss.push(i);
            } else {
                ss.pop();
                if (ss.empty()) {
                    ss.push(i);
                } else {
                    maxans = max(maxans, i - ss.top());
                }
            }
        }
        return maxans;
    }
};