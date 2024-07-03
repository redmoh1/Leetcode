
  typedef struct Node {
      int data;
      struct Node *next;
  }Node;
 
Node* mergeTwoLists(  Node* list1 ,  Node* list2) {
    if (!list1) return list2;
    if (!list2) return list1;
    Node* new=list1;
    Node* t=new;
    while(t->next){
        t=t->next;
    }
    t->next=list2;
    int temp;
    Node* l;
   bool swapped;
    do {
        swapped = false;
        l = new;

        while (l->next) {
            if (l->data > l->next->data) {
                int temp = l->data;
                l->data = l->next->data;
                l->next->data = temp;
                swapped = true;
            }
            l = l->next;
        }
    } while (swapped);

    return new;
}