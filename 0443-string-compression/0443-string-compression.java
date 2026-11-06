class Solution {
    public int compress(char[] chars) {
        int fr=0;
        int sc=0;
        int cnt=1;
        for(int i=0;i<chars.length;i++){
            char ch=chars[i];

            while(i<chars.length-1&&ch==chars[i+1]){
                cnt++;
                i++;
            }
             chars[sc++] = ch;

            if(cnt>1){
               
                String num= String.valueOf(cnt);
                for(int j=0;j<num.length();j++){
                    chars[sc++]=num.charAt(j);
                }
            }
            cnt=1;
        }
        return sc;

        
    }
}