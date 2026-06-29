class Solution {
public:
    string decodeString(string s) {
        stack<int>numStack;
        stack<string>strstack;

        int currnum=0;
        string currstr="";
         
         for(char ch:s){
            if(isdigit(ch)){
                currnum = currnum*10+(ch-'0');

            }else if(ch=='['){
                numStack.push(currnum);
                strstack.push(currstr);

                currnum=0;
                currstr="";


            }else if(ch==']'){
                int repeat = numStack.top();
                numStack.pop();
                string prev=strstack.top();
                strstack.pop();
                while(repeat--){
                    prev+=currstr;
                }
                currstr=prev;
                
            }else{
                currstr+=ch;
            }
         }
         return currstr;
        
        
    }
};