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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=new ListNode();
        ListNode* mover = head;
        while (list1!= nullptr && list2 != nullptr) {
           
        if (list1->val <= list2->val) {
                mover->next= list1;
                list1=list1->next;
                
            }
            else{
                mover->next=list2;
                list2=list2->next;
            }
            mover=mover->next;
        
        }
        while (list1!= nullptr){
                mover->next= list1;
                list1=list1->next;
                mover=mover->next;

        }
         while (list2!= nullptr){
                mover->next= list2;
                list2=list2->next;
                mover=mover->next;

        }
        return head->next;

    }
};