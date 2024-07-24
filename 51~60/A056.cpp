class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer(nums1.size(), -1);
        for(int i = 0; i < nums1.size(); i++){
            bool found = false;
            for(int j = 0; j < nums2.size(); j++){
                if(found && nums2[j] > nums1[i]){
                    answer[i] = nums2[j];
                    break;
                }
                if(nums1[i] == nums2[j]){
                    found = true;
                }
            }
        }
        return answer;
    }
};