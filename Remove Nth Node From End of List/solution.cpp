/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //A 2 node approach 
        if(head == nullptr){
            return head; 
        }

        ListNode* first = head; 
        ListNode* second = head; 

        //Advance one of the nodes n times
        for(int i = 0; i < n ; i++){
            second = second ->next;
        }

   
        if(second == nullptr){
            //Remove the first node 
            head = head->next; 
            return head; 
        }

    
        //Then advance them untill second->next is null
        while(second->next != nullptr){
            second = second -> next; 
            first = first -> next; 
        }

        //Then remove that node 
        first->next = first->next->next;
        return head; 


    }
};
