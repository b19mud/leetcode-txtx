class Solution {
public:
    bool judgeCircle(string moves) {
        int L=0;
        int R=0;
        int U=0;
        int D=0;
        int length = moves.length();
        for(int i=0;i<length;i++){
            if(moves[i]=='U'){
                U++;
            }
            else if(moves[i]=='L')
            {
                L++;    
            }
            else if(moves[i]=='D')
            {
                D++;
            }
            else if(moves[i]=='R'){
                R++;
            }
        }
        if(L==R&&U==D){
            return true;
        }else{
            return false;
        }
    }
};