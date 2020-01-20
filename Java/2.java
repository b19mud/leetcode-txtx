/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int flag = 0;
        ListNode l3 = new ListNode(0);
        ListNode cursor = l3;
        while(l1 != null || l2 != null || flag != 0){
                
            int speciaol1 = (l1==null ? 0 : l1.val );
            int speciaol2 = (l2==null ? 0 : l2.val );

            

            ListNode currentNode = new ListNode((speciaol1+ speciaol2 + flag)%10);

            flag = (speciaol1 + speciaol2+ flag)/10;
            
            System.out.println(currentNode.val);
            cursor.next = currentNode;
            cursor = currentNode;
             
            if(l1 != null)
                l1 = l1.next;
            if(l2 != null)
                l2 = l2.next;
        }
        return l3.next;
    }
}

// 895 + 956 

//  89 + 756