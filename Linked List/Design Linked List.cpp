class MyLinkedList {
  public:
      struct Node{
          int data;
          Node* next;
          Node(int val): data(val),next(NULL){}
      };
      Node* head;
      int length;
  public: 
      MyLinkedList() {
          head=NULL;
          length=0;     
      } 
      int get(int index) {
          if (index < 0 || index >= length) return -1;
          Node* curr = head;
          for (int i = 0; i < index; ++i)
              curr = curr->next;
          return curr->data;
      }
      
      void addAtHead(int val) {
          Node* newNode=new Node(val);
          newNode->data=val;
          newNode->next=head;
          head=newNode;
          length++;
          
      }
      
      void addAtTail(int val) {
          Node* newNode=new Node(val);
          if(!head){
              head=newNode;
          }
          else{
              Node* curr=head;
              while(curr->next){
                  curr=curr->next;
              }
              curr->next=newNode;
  
          }
          length++;
          
      }
      
      void addAtIndex(int index, int val) {
          if(index<0 || index>length)return;
          if(index==0){
              addAtHead(val);
          }
          else{
              Node* newNode=new Node(val);
              Node* curr=head;
              for(int i=0;i<index-1;i++){
                  curr=curr->next;
              }
              newNode->next=curr->next;
              curr->next=newNode;
              length++;    
          }
          
      }
      
      void deleteAtIndex(int index) {
          if (index < 0 || index >= length) return;
          if (index == 0) {
              Node* temp = head;
              head = head->next;
              delete temp;
          } else {
              Node* curr = head;
              for (int i = 0; i < index - 1; ++i)
                  curr = curr->next;
              Node* toDelete = curr->next;
              curr->next = curr->next->next;
              delete toDelete;
          }
          length--;
          
      }
  };