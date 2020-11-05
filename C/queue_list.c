#include <stdio.h>
#include <stdlib.h>
struct sNode{
    int data;
    struct sNode* next;
};
typedef struct sNode Node;
Node* create_node(){
    int elem;
    printf("Enter The Value TO be Entered In Node : ");
    scanf("%d",&elem);
    Node* newnode = (Node* )malloc(sizeof(Node* ));
    newnode->data = elem;
    newnode->next = NULL;
    return newnode;
}
Node* insert_end(Node* head){
    Node* ref1 = create_node();
    if(head!=NULL){
         Node* ref = head;
         while(ref->next!=NULL){
            ref = ref->next;
        }
        ref->next = ref1;

    }
    else{
        head = ref1;
    }
    return head;
}

Node* delete_beg(Node* head){
    if(head!=NULL){
        head= head->next;
    }
    else{
         printf("\nQueue Underflow!!");
    }
    return head;
}

int peek(Node* head){
    if(head!=NULL){
        return head->data;
    }
    else{
        return -1;
    }
}
void traverse(Node* head){

    if(head!=NULL){
        Node* ref= head;
        int i=1;
        while(ref!=NULL){
            printf("\nQueue %d : %d",i,ref->data);
            ref = ref->next;
            i++;
        }
    }
    else{
        printf("\nQueue Is empty!!");
    }
}
void main(){
        int option =0;
        Node* head =NULL;
        int key,up,num;
        while(option !=5){
        printf("\n\n*************QUEUE OP**************");
        printf("\n1 ===> ENQUEUE\n");
        printf("\n2 ===> DEQUEUE\n");
        printf("\n3 ===> PEEK\n");
        printf("\n4 ===> TRAVERSE\n");
        printf("\n5 ===> EXIT\n");
        printf("****************************************\n");
            scanf("%d",&option);
            switch(option){
            case 1:
                head = insert_end(head);
                break;
            case 2:
               head = delete_beg(head);
                break;
            case 3:
                num =peek(head);
                if(num!=-1){
                    printf("\nFront Element is %d",num);
                }
                else{
                    printf("\nQueue is empty!!");
                }
                break;
            case 4:
                traverse(head);
                break;
            case 5:
                printf("\nTHANKS FOR THE VISIT!!\n");
                printf("***********************************\n");
            }
        }
}
