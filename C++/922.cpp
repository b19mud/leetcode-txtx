class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> B(A.size());
        int j=0;//偶数计数
        int k=1;//奇数计数
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            {
                B[j]=A[i];
                j+=2;
            }
            else if(A[i]%2==1)
            {
                B[k]=A[i];
                k+=2;
            }
        }
        return B;
    }
};