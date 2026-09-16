class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double ans=0;
        double ANS= Double.NEGATIVE_INFINITY;

        for(int i=0;i<nums.length;i++){
         if(i+1>k){
            ans-=nums[i-k];
        }
        ans+=nums[i];
        if(i+1>=k){
           ANS=Math.max(ans/k,ANS);
        }

        }
        return ANS;
        
    }
}