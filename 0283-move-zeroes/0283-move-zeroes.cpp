class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int w = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] != 0){
                int temp = nums[w];
                nums[w] = nums[i];
                nums[i] = temp;
                w += 1;
            }

        }
    }
};