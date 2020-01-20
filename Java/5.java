class Solution {
    public String longestPalindrome(String s) {

        if(s.length() == 1){
            return s;
        }
        String flag = "";
        String str1 = "";
        String t_str1 = "";
        String str2 = "";
        String t_str2 = "";


        //单字母中心
        for(int i=0;i<s.length();i++){
            str1 = check(s,i,i);
            //System.out.println("str1 = "+ str1);
            if(str1.length()>t_str1.length()){
                t_str1 = str1;
            }
        }


        //双字母中心
        for(int j=0;j<s.length()-1;j++){
            if(s.charAt(j) == s.charAt(j+1)){
                str2 = check(s,j,j+1);
                if(str2.length()>t_str2.length()){
                    t_str2 = str2;
                }
            }
        }

        if(t_str1.length() > t_str2.length()){
            return t_str1;
        }else{
            return t_str2;
        }
    }

    public String check(String s,int left,int right){

        int l = left;
        //System.out.println(left + "--" + right);
        int r = right;
        while((l-1)>=0 && (r+1)<s.length()){
            if(s.charAt(l-1) != s.charAt(r+1)){
                break;
            }else{
                l--;
                r++;
            }
        }

        if(r == s.length() -1 ){
            return s.substring(l);
        }else{
            return s.substring(l,r+1);
        }

    }



}