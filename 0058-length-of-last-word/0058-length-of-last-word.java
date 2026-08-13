class Solution {
    public int lengthOfLastWord(String s) {
        String[] arr = s.split(" ");
        int n=arr.length;
        String a=arr[n-1];
        return a.length();
        
    }
}