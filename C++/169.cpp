class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int flag = nums.size();
        sort(nums.begin(),nums.end());
        return nums[flag/2];
    }
};