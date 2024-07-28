class Solution {
public:
    bool isPalindrome(string s) {
        bool answer = true ;
        int left = 0, right = s.length()-1 ;
        while(left < right){
            if(!isalpha(s[left]) && !isdigit(s[left])){
                left++ ;
                continue ;
            }
            if(!isalpha(s[right]) && !isdigit(s[right])){
                right -- ;
                continue ;
            }
            if(tolower(s[left++]) != tolower(s[right--])){
                answer = false ;
                break ;
            }
        }
        return answer ;
    }
};