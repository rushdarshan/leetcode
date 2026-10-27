class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int maxcount = 0;
        vector<int> a;
        for(int i = 0; i<nums.size(); ++i){
            if(find(a.begin(),a.end(),nums[i]) == a.end()){
                a.push_back(nums[i]);
            }
        }
        sort(a.begin(), a.end(), greater<int>());
        if(a.size() < 3){
            maxcount = *max_element(a.begin(),a.end());
            return maxcount;
        }
        return a[2];

    }
};