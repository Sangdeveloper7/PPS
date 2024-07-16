class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string answer = strs[0];
        
        for (int i = 1; i < strs.size(); i++) {
            string new_answer;
            for (int j = 0; j < answer.length() && j < strs[i].length(); j++) {
                if (strs[i][j] == answer[j]) {
                    new_answer += answer[j];
                } else {
                    break;
                }
            }
            answer = new_answer;
            if (answer.empty()) return "";
        }
        
        return answer;
    }
};