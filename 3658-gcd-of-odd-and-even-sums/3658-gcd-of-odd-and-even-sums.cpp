class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int ans=0;
        int ans1=0;
        for(int i=1;i<=n*2;i++){
            if(i%2!=0){
                ans+=i;
            }else{
                ans1+=i;
            }
        }
        return gcd(ans,ans1);
        
        
    }
};