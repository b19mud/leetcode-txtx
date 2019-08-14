class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        //int row = board.size();
        //int column = board[0].size();
        int basex=0;
        int basey=0;
        for (int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(board[i][j] == 'R')
                {
                    return movecheck(i,j,0,-1,board)+movecheck(i,j,0,1,board)+movecheck(i,j,-1,0,board)+movecheck(i,j,1,0,board);
                }
            }
        }
        
        return 0;
    }
    
    int movecheck(int bax,int bay,int dx,int dy,vector<vector<char>> &coordinate)
    {

        while(bax>=0 && bax<coordinate[0].size()&&bay>=0&&bay<coordinate.size())
        {
            bax+=dx;
            bay+=dy;
            if(bax>=0 && bax<coordinate[0].size()&&bay>=0&&bay<coordinate.size())
            {
                if(coordinate[bax][bay]!='B')
                {
                    if(coordinate[bax][bay]=='p')
                        return 1;
                }
                else{
                    break;
                }
            }
        }
        return 0;

    }
};