class Solution {
    
    public int[] searchRange(int[] nums, int target) {
        int mytarget = target;
        int[] myresult = new int[2];
        myresult[0] = -1;
        myresult[1] = -1;

        for(int i=0;i<nums.length;i++){
            if(nums[i] == mytarget){
                myresult[0] = i;
                break;
            }
        }
        for(int j= nums.length-1;j >=0;j--){
            if(nums[j] == mytarget){
                myresult[1] = j;
                break;
            }
        }
        

        return myresult;

    }
}

/*
int mytarget = target;
int[] myresult = new int[2];
boolean flag = false;
int firstloc = 0;
int lastloc = 0;
int flag_change_num = 0;
for(int i = 0;i<nums.length;i++){
    if(nums[i] == mytarget){
        if(!flag){
            firstloc = i;
            flag = true;
            flag_change_num++;
        }else{
            lastloc = i;
            flag = false;
            flag_change_num++;
        }
    }

}
System.out.println(flag_change_num);
if(flag_change_num == 0){
    myresult[0] = -1;
    myresult[1] = -1;
}else{
    if(flag_change_num == 1){
        myresult[0] = firstloc;
        myresult[1] = firstloc;
    }else{
        myresult[0] = firstloc;
        myresult[1] = lastloc;
    }
    
}

return myresult;
*/