class Solution {
public:
    void reverseString(vector<char>& s) {
        int length = size(s);
        char temp;
        if(length%2==0){
            for(int i=0;i<length/2;i++){
                temp = s[i];
                s[i] = s[length-i-1];
               s[length-i-1]=temp;
            }
        }else{
            for(int i=0;i<(length/2+1);i++){
                temp = s[i];
                s[i] = s[length-i-1];
                s[length-i-1]=temp;  
            }
        }
    }
};