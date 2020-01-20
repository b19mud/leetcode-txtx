class Solution {
    public int maxArea(int[] height) {
        int i=0;

        int j = height.length-1;
        int area = 0;
        int current_area=0;
        while(i != j){
            if(height[i] <= height[j]){
                current_area = (j-i)*height[i];
                area = Math.max(area,current_area);
                System.out.println("current area is "+ area);
                i++;
                
            }else{
                current_area = (j-i)*height[j];
                area = Math.max(area,current_area);
                System.out.println("current area is "+ area);
                j--;
            }
        }

        return area;
        
    }
}