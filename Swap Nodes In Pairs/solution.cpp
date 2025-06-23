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
    ListNode* swapPairs(ListNode* head) {
        if(!head)
        {   
            //No list 
            return nullptr; 
        }

        if(!head->next)
        {
            return head; 
        }

        int val = 0; 
        int valPrev = 0; 
        int count = 0; 
        ListNode* curr = head -> next; 
        ListNode* prev = head; 

        while(curr)
        {
            if(count % 2 == 0)
            {
                val = curr -> val; 
                valPrev = prev -> val; 

                curr -> val = valPrev; 
                prev -> val = val; 
            }
            count++; 
            curr = curr -> next;
            prev = prev -> next; 
        }


        return head; 

    }
};
