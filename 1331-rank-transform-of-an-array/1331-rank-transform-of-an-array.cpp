class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>db=arr;
        int rank=1;
        unordered_map<int,int>mp;
        sort(arr.begin(),arr.end());
        for(int i:arr){
            if(mp.find(i)==mp.end()){
                mp[i]=rank++;
            }
        }
        for(int i=0;i<db.size();i++){
            db[i]=mp[db[i]];
        }
        return db;
        
    }
};