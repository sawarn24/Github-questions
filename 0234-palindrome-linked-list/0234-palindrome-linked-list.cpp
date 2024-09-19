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
  ListNode* reverse(ListNode* head)
  {
   if(head==nullptr||head->next==nullptr)
   {
    return head;
   }
   
   ListNode*newhead=reverse(head->next);
    ListNode* front=head->next;
    front->next=head;
    head->next=nullptr;
    return newhead;

  }
    bool isPalindrome(ListNode* head) {
         if (head == nullptr || head->next == nullptr) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr&&fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
         ListNode* tail=reverse(slow->next);
          ListNode*first=head;
           ListNode* second=tail;
         while(second)
         {
            if(first->val==second->val)
            {
                first=first->next;
                second=second->next;

            }
            else
            {
                return false;
            }
            
         }
         return true;


        
    }
};