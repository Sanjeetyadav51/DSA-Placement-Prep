class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string curr;

        stringstream ss(path);
        while(getline(ss,curr,'/')){
            if(curr==""||curr==".")continue;

            if(curr==".."){
                if(!st.empty())
                    st.pop();
                }else{
                    st.push(curr);
                }
            
           
           }
         if(st.empty())
            return "/";
            vector<string>a;
            while(!st.empty()){
                   a.push_back(st.top());
                   st.pop();
            }
            reverse(a.begin(),a.end());
           
         string ans;

            for(string dirr:a){
                ans+="/"+dirr;
            }
        return ans;

        
    }
};