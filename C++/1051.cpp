class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> two(heights);
        int flag = 0;
        int n = heights.size();
        for(int j=0;j<n-1;j++)
        {
            for (int i=0;i<n-1-j;i++)
            {
                if(heights[i]>heights[i+1])
                {
                    int temp = heights[i];
                    heights[i] = heights[i+1];
                    heights[i+1] = temp;
                }
            }
        }
        for(int s = 0;s<n;s++)
        {
            if(heights[s] != two[s])
                flag++;
        }
        return flag;
        
    }
    
};