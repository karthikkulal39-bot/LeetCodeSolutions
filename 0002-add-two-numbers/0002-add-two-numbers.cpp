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
    ListNode* head=nullptr;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
              long long value1=0;
        long long value2=0;
        int carry=0;
        while(l1!=nullptr && l2!=nullptr){
            value1=l1->val;
            l1=l1->next;
            value2=l2->val;
            l2=l2->next;
            int sum=value1+value2+carry;
            carry=sum/10;
            int dig=sum%10;
            head=createLL(head,dig);
            
        }
        while(l1!=nullptr){
            int sum=l1->val + carry;
            l1=l1->next;
            carry=sum/10;
            int dig=sum%10;
           head=createLL(head,dig);
        }
        while(l2!=nullptr){
            int sum=l2->val + carry;
            l2=l2->next;
            carry=sum/10;
            int dig=sum%10;
           head=createLL(head,dig);
        }
        if(carry!=0){
            head=createLL(head,carry);
        }
       
        return head;
    }
    ListNode* createLL(ListNode* head,int val){
        if(head==nullptr){
            return new ListNode(val);
        }
        ListNode* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;    
        }
        ListNode* newOne=new ListNode(val);
        temp->next=newOne;
    return head;
    }

 
};