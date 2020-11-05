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
Node* insert_beg(Node* head){
    Node* ref = create_node();
    if(head!=NULL){
        ref->next = head;
        head = ref;
    }
    else{
        head = ref;
    }
    return head;
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
void insert_after(Node* head,int key){
    Node* ref1 = create_node();
    if(head!=NULL){
          Node* ref = head;
         while(ref->next!=NULL && ref->data != key){
            ref = ref->next;
        }
        if(ref->next!=NULL){
            ref1->next = ref->next;
            ref->next = ref1;
        }
        else if(ref->next==NULL && ref->data == key){
            ref->next = ref1;
        }
        else{
            printf("\nNo Such Node Is Found!!");
        }
    }
    else{
        printf("\nList Is Empty!!");
    }
}
Node* delete_beg(Node* head){
    if(head!=NULL){
        head= head->next;
    }
    else{
         printf("\nList Is Empty!!");
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
         printf("\nList Is Empty!!");
    }
    return head;
}
Node* delete_after(Node* head,int key){
    if(head!=NULL){
          Node* ref = head;
         while(ref->next!=NULL && ref->next->data != key){
            ref = ref->next;
        }

        if(head->data!=key){
            if(ref->next->data ==key){
                ref->next = ref->next->next;
            }
            else{
                printf("No Such Data is Found!!");
            }
        }
        else{
            head= head->next;
        }
    }
    else{
        printf("\nList Is Empty!!");
    }
    return head;
}
void update(Node* head,int key,int up){
    if(head!=NULL){
        Node* ref= head;
        while(ref->next!=NULL && ref->data != key){
            ref = ref->next;
        }
        if(ref->next!=NULL){
             ref->data = up;
        }
        else if(ref->next==NULL && ref->data == key){
             ref->data = up;
        }
        else{
            printf("\nNo Such Node Is Found!!");
        }

    }
    else{
        printf("\nList Is empty!!");
    }
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
void main(){
        int option =0;
        Node* head =NULL;
        int key,up;
        while(option !=9){
            printf("\n\n*************LIST OP**************");
            printf("\n1 ===> INSERT AT BEG\n");
            printf("\n2 ===> INSERT AT END\n");
            printf("\n3 ===> INSERT AFTER\n");
            printf("\n4 ===> DELETE AT BEG\n");
            printf("\n5 ===> DELETE AT END\n");
            printf("\n6 ===> DELETE SPECIFIC\n");
            printf("\n7 ===> UPDATE NODE\n");
            printf("\n8 ===> TRAVERSE\n");
            printf("\n9 ===> EXIT\n");
            printf("***********************************\n");
            scanf("%d",&option);
            switch(option){
            case 1:
                head = insert_beg(head);
                break;
            case 2:
                head = insert_end(head);
                break;
            case 3:
                printf("Enter The value Of the Node to be inserted after : ");
                scanf("%d",&key);
                insert_after(head,key);
                break;
            case 4:
               head = delete_beg(head);
                break;
            case 5:
                head = delete_end(head);
                break;
            case 6:
                printf("Enter The value Of the Node to be Deleted : ");
                scanf("%d",&key);
                head = delete_after(head,key);
                break;
            case 7:
                 printf("Enter The value Of the Node to be Updated: ");
                scanf("%d",&key);
                 printf("Enter The New Value: ");
                scanf("%d",&up);
                update(head,key,up);
                break;
            case 8:
                traverse(head);
                break;
            case 9:
                printf("\nTHANKS FOR THE VISIT!!\n");
                printf("***********************************\n");
            }
        }
}
