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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto t1=l1;
        auto t2=l2;
        ListNode* xyz=new ListNode(-1);
        int carry=0;
        auto curr=xyz;
        auto sum=0;
        while(t1 || t2)
        {   sum=carry;
            if(t1)
            sum+=t1->val;
            if(t2)
            sum+=t2->val;
            ListNode* newnode=new ListNode(sum%10);
            carry=sum/10;
            curr->next=newnode;
            curr=curr->next;
            if(t1)
            t1=t1->next;
            if(t2)
            t2=t2->next;


        }
        if(carry)
        {
        ListNode* newnode =new ListNode(carry);
        curr->next=newnode;
        }
        return xyz->next;
}
};