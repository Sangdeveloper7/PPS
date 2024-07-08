class Solution {
public:
    bool isPowerOfFour(int n) {
        int number = n;
        bool result = true;
        while(number > 1){
            if(number % 4 == 0){
                number = number/4;
            }else{
                result = false;
                break;
            }
        }
        if(number != 1){
            result = false;
        }
        return result;
    }
};