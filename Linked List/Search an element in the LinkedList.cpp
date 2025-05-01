class Solution {
  public:
    struct Node
    {
      int data;
      Node* next;
      Node(int x) {  data = x;  next = NULL; }
    };
  public:
    bool searchKey(int n, Node* head, int key) {
      if(head==NULL)
          return false;
      for(int i=0;i<n;i++){
          if(head->data==key)
              return true;
          else
              head=head->next;
      }
      return false;
    }
};
