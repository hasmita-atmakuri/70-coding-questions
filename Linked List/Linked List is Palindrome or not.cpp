class Solution {
  public:
    ListNode* reverse(ListNode* head){
      ListNode* curr=head;
      ListNode* prev=NULL;
      while(curr!=NULL){
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
      }
      return prev;
    }
    bool isPalindrome(ListNode* head) {
      ListNode* fast=head;
      ListNode* slow=head;
      while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
      }
      ListNode* rev=reverse(slow);
      while(rev!=NULL){
        if(rev->val!=head->val)
            return false;
        rev=rev->next;
        head=head->next;
      }
      return true;
    }
};