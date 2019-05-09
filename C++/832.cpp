class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int row = A.size();
        int col = A[0].size();
        if(col%2 == 0){
            for(int i =0;i<row;i++){
                int a = col/2;
                for(int k=0;k<a;k++){
                    int temp = A[i][k];
                    A[i][k] = A[i][col-k-1];
                    A[i][col-k-1]=temp;
                }
            }
        }
        else if(col%2 ==1){
            for(int m=0;m<row;m++){
                int b = col/2+1;
                for(int l=0;l<b;l++){
                    int temp1=A[m][l];
                    A[m][l]=A[m][col-l-1];
                    A[m][col-l-1]=temp1;
                }
            }
            }
        
        
        for(int c=0;c<row;c++){
            
            for(int j=0;j<col;j++){
                if (A[c][j] == 0){
                    A[c][j]=1;
                }
                else if(A[c][j]==1){
                    A[c][j]=0;
                }
            }
        }
    return A;
    }
};