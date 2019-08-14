class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n = A.size();
        for(int j=0; j<n-1;j++)
        {
        for (int i=0;i<n-1;i++)
        {
            if(A[i]%2==1&A[i+1]%2==0)
            {
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }
        }
        return A;
    }
};