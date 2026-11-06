class Solution {
    public boolean increasingTriplet(int[] nums) {
        int n=nums.length;
        int first=Integer.MAX_VALUE;
        int second=Integer.MAX_VALUE;


        for(int num:nums){
            if(first>=num){
                first=num;

            }else if(num<=second){
                second=num;
            }else{
                return true;
            }
        }
        return false;
        
    }
}