#include <stdio.h>
#include <stdlib.h>
struct sNode{
    int data;
    struct sNode* prev;
    struct sNode* next;
};
typedef struct sNode Node;
Node* create_node(){
    int elem;
    printf("\nEnter The Value TO be Entered In Node : ");
    scanf("%d",&elem);
    Node* newnode = (Node* )malloc(sizeof(Node* ));
    newnode->prev =NULL;
    newnode->data = elem;
    newnode->next = NULL;
    return newnode;
}
void traverse(Node* head){

    if(head!=NULL){
        Node* ref= head;
        int i=1;
        while(ref!=NULL){
            printf("\nNode %d : %d",i,ref->data);
            ref = ref->next;
            i++;
        }
    }
    else{
        printf("\nList Is empty!!");
    }
}
Node* Node_sort(Node* head){
    if(head!=NULL){
        Node* ref = head;
        while(ref->next!=NULL){
            Node* ref1 = ref->next;
            while(ref1!=NULL){
                if(ref->data > ref1->data){
                    int j=0;
                    j = ref1->data;
                    ref1->data = ref->data;
                    ref->data  = j;
                }
                ref1 = ref1->next;
            }
            ref=ref->next;
        }
    }
    else{
        printf("\nList Is empty!!");
    }
    return head;
}
Node* merge(Node* head1, Node* head2){
    Node* ref = head1;
    while(ref->next!=NULL){
        ref=ref->next;
    }
    ref->next = head2;
    Node_sort(head1);
    return head1;
}
void main(){
    //FIRST NODE
        Node* ref1 = create_node();
        Node* head1 = ref1;
        Node* ref2 = create_node();
        ref1->next = ref2;
        ref2->prev = head1;
        traverse(head1);
     //SECOND NODE
         Node* ref3 = create_node();
        Node* head2 = ref3;
        Node* ref4 = create_node();
        ref3->next = ref4;
        ref4->prev = head2;
        traverse(head2);
        printf("\nAFTER MERGIMG AND SORTING\n");
       Node* head = merge(head1,head2);
       traverse(head);
    }

