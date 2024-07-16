class Solution {
public:
    bool checkRecord(string s) {
        int count_A = 0;
        int consecutive_L = 0;
        
        for(char c : s) {
            if(c == 'A') {
                count_A++;
                if(count_A >= 2) return false;
                consecutive_L = 0;
            } else if(c == 'L') {
                consecutive_L++;
                if(consecutive_L >= 3) return false;
            } else {
                consecutive_L = 0;
            }
        }
        
        return true;
    }
};