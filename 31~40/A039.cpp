class Solution {
public:
    bool isPerfectSquare(int num) {
        int k = 1;
        if(num == 1){
            return true;
        }
        while(k < num){
            int i = k*k;
            if(num == i){
                return true;
            }
            k++;
        }
        return false;
    }
};