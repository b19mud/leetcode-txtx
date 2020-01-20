class Solution {
    public int maxSubArray(int[] nums) {
        int theEnd = nums[0];
        int sum = 0;
        for(int num:nums){
            if(sum>0){
                sum = sum +num;
            }else{
                sum = num;
            }
            theEnd = Math.max(theEnd,sum);
        }

        
        return theEnd;
    }
}