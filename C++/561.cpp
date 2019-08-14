
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int flag=0;
        int n=nums.size();
        for(int k=0;k<n;k+=2)
        {
                flag+=nums[k];
        }
        return flag;
    }
    
};