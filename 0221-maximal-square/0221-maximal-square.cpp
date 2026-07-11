class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int maxi=0;
        vector<vector<int>>dp(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            dp[i][0]=matrix[i][0]-'0';
            maxi=max(maxi,dp[i][0]);

        }
        

        for(int j=0;j<c;j++){
             dp[0][j]=matrix[0][j]-'0';
              maxi=max(maxi,dp[0][j]);
        }
       

         for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(matrix[i][j]=='1'){
                    dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
                }else{
                    dp[i][j]=0;
                }
                maxi=max(maxi,dp[i][j]);



             }
     
         }
         return maxi*maxi;
       


        
    }
};