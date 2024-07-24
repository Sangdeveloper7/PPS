class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int open = 0;
        
        for (char c : s) {
            if (c == '(' && open++ > 0) result += c;
            if (c == ')' && open-- > 1) result += c;
        }
        
        return result;
    }
};