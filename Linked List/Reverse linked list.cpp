class Solution {
  public:
    ListNode* reverseList(ListNode* head) {
      if(head==NULL || head->next==NULL)
        return head;
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
};