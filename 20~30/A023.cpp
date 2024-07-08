class Solution {
public:
    int addDigits(int num) {
        if(num < 10) {
            return num;
        }
        int result = 0;
        int tempNum = num;
        while(tempNum / 10 > 0) {
            int tempNum2 = tempNum;
            result = 0;
            while(tempNum2 > 0) {
                result += tempNum2 % 10;
                tempNum2 /= 10;
            }
            tempNum = result;
        }

        return result;
    }
};