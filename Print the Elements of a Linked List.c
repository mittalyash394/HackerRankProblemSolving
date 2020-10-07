

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *p = head;
    //p= singly_linked_list;
    while(p->next!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
    printf("%d\n",p->data);
}

