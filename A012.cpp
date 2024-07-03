class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        
        for(int i = 2; i < n; i++) {
            bool check = true;
            for(int j = 2; j * j <= i; j++) { 
                if(i % j == 0) {
                    check = false;
                    break; 
                }
            }
            if(check) {
                count++;
            }
        }

        return count;
    }
};
