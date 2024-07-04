class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for(int i=0; i<nums.size(); i++){
            int count = 0;
            for(int j = 0; j<nums.size(); j++){
                if(i == j){
                    continue;
                }else{
                    if(nums[i] == nums[j]){
                        count = 1;
                    }
                }
            }
            if(count == 0){
                result = nums[i];
            }
        }
        return result;
    }
};