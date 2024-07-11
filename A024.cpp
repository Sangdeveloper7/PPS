class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        int twoten = 0;
        bool result = true;

        for(int i=0; i<5; i++){
            if(bills[i] == 5){
                five++;
            }else if(bills[i] == 10){
                five--;
                ten++;
            }else if(bills[i] == 20){
                ten--;
                five--;
            }
            if(five < 0 || ten < 0){
                result = false;
            }
        }

        return result;
        
    }
};