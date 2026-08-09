class Solution {
    public boolean isValid(String s) {
        Deque<Character>st = new ArrayDeque<>();
        for(char c:s.toCharArray()){
            if(c=='('||c=='{'||c=='['){
                st.push(c);
            }else{
                if(st.isEmpty())return false;
                int t = st.pop();
                if(c==')'&&t!='(')return false;
                 if(c==']'&&t!='[')return false;
                  if(c=='}'&&t!='{')return false;

            }
          

        }
        return st.isEmpty();

        
    }
}