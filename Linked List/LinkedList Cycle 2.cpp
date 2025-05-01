class Solution {
  public:
    ListNode *detectCycle(ListNode *head) {
      if(head==NULL || head->next==NULL)
          return NULL;
      ListNode *fast=head;
      ListNode *slow=head;
      while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
          ListNode *start=head;
          while(start!=slow){
            start=start->next;
            slow=slow->next;
          }
          return start;
        }
      }
      return NULL;
    }
};