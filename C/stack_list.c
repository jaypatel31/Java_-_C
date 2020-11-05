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
Node* delete_end(Node* head){
    if(head!=NULL){
        if(head->next!=NULL){
             Node* ref = head;
             while(ref->next->next!=NULL){
                ref=ref->next;
             }
             ref->next = NULL;
        }
        else{
            head=NULL;
        }
    }
    else{
         printf("\nStack Underflow!!");
    }
    return head;
}
Node* top1(Node* head){
     Node* ref = head;
     if(head!=NULL){
     while(ref->next!=NULL){
            ref = ref->next;
        }
     }
    return ref;
}
int peek(Node* top){
    if(top!=NULL){
        return top->data;
    }
    else{
        printf("\nStack is Empty");
    }
}
void traverse(Node* head){
    if(head!=NULL){
        Node* ref = head;
        int i=1;
        while(ref != NULL){
            printf("\nStack %d : %d",i,ref->data);
            ref = ref->next;
            i++;
        }
    }
    else{
        printf("\nStack is Empty");
    }
}
void main(){
        int option =0;
        Node* head =NULL;
        int key,up,num;
        Node* top =NULL;
        while(option !=5){
            printf("\n\n*************STACK OP**************");
            printf("\n1 ===> PUSH\n");
            printf("\n2 ===> POP\n");
            printf("\n3 ===> PEEK\n");
            printf("\n4 ===> TRAVERSE\n");
            printf("\n5 ===> EXIT\n");
            printf("***********************************\n");
            scanf("%d",&option);
            switch(option){
            case 1:
                head = insert_end(head);
                break;
            case 2:
                head = delete_end(head);
                break;
            case 3:
                top = top1(head);
                if(top!=NULL){
                    num =peek(top);
                    printf("Top Element is : %d",num);
                }
                else{
                    printf("\nStack is Empty");
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
