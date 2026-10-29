class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int cnt = 1;
        sort(nums.begin(), nums.end());
        for(int i = nums.size()-2; i >= 0; --i){
            if(nums[i] == nums[i+1]){
                continue;
            }
            cnt++;
            if(cnt == 3){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
};