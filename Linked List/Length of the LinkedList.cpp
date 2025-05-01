class Solution {
  public:
    struct Node
    {
      int data;
      Node* next;
      Node(int x) {  data = x;  next = NULL; }
    };
  public:
    int getCount(struct Node* head) {
      int count=0;
      while(head->next!=NULL){
          head=head->next;
          count++;
      }
      return count+1;
        
    }
};