class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        for(int start=1;start<=9;start++){
            int num=start;
            for(int no=start+1;no<=9;no++){
                 num= num*10+no;
                if(num>=low&&num<=high)
                    ans.push_back(num);
                
            }
        }
        sort(ans.begin(),ans.end());
       return ans;
        
    }
};