class Solution {
    public int maxSubArray(int[] nums) {
        int sum=nums[0];
        int ans=nums[0];

        for(int i=1;i<nums.length;i++){
              ans=Math.max(nums[i],ans+nums[i]);
              sum=Math.max(sum,ans);
            
        }
        return sum;
        
    }
}