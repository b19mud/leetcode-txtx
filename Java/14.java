class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length == 0) return "";
        String flag = strs[0];
        for(String str:strs){
            while(!str.startsWith(flag)){
                if(flag.length() == 1)
                    return "";
            }
        }
        return flag;
    }
}