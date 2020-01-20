/*
*瓶盖换汽水 类问题
*/

import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner myscanner = new Scanner(System.in);
        Integer result = 0;
        while(myscanner.hasNext()){
            Integer myint = myscanner.nextInt();
            if(myint != 0){
                result = myint * 1 / 2;
                System.out.println(result);  
            }
        }
    }
}
