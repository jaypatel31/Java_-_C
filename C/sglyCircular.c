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
Node* insert_beg(Node* last){
    Node* ref = create_node();
    if(last!=NULL){
        ref->next = last->next;
        last->next = ref;
    }
    else{
        last = ref;
        ref->next = last;
    }
    return last;
}
Node* insert_end(Node* last){
    Node* ref1 = create_node();
    if(last!=NULL){
        ref1->next = last->next;
        last->next = ref1;
        last = ref1;
    }
    else{
        last = ref1;
        ref1->next = last;
    }
    return last;
}
Node* insert_after(Node* last,int key){
    Node* ref1 = create_node();
    if(last!=NULL){
          Node* ref = last->next;
         while(ref->next!=last->next && ref->data != key){
                ref = ref->next;
        }
        if(ref->next!=last->next){
            ref1->next = ref->next;
            ref->next = ref1;
        }
        else if(ref->next==last->next && ref->data == key){
            ref1->next = ref->next;
            ref->next = ref1;
            last = ref1;
        }
        else{
            printf("\nNo Such Node Is Found!!");
        }
    }
    else{
        printf("\nList Is Empty!!");
    }
    return last;
}
Node* delete_beg(Node* last){
    if(last!=NULL){
        if(last->next!=last){
            last->next= last->next->next;
        }
        else{
            last=NULL;
        }
    }
    else{
         printf("\nList Is Empty!!");
    }
    return last;
}
Node* delete_end(Node* last){
    if(last!=NULL){
        if(last->next!=last){
             Node* ref = last->next;
             while(ref->next->next!=last->next){
                ref=ref->next;
             }
             ref->next = last->next;
             last = ref;
        }
        else{
            last=NULL;
        }
    }
    else{
         printf("\nList Is Empty!!");
    }
    return last;
}
Node* delete_after(Node* last,int key){
    if(last!=NULL){
          Node* ref = last->next;
         while(ref->next!=last->next && ref->next->data != key){
            ref = ref->next;
        }

        if(last->data!=key){
            if(ref->next->data ==key){
                ref->next = ref->next->next;
            }
            else{
                printf("No Such Data is Found!!");
            }
        }
        else{
            if(last->next!=last){
                ref->next = last->next;
                last= ref;
            }
            else{
                last=NULL;
            }
        }
    }
    else{
        printf("\nList Is Empty!!");
    }
    return last;
}
void update(Node* last,int key,int up){
    if(last!=NULL){
        Node* ref= last->next;
        while(ref->next!=last->next && ref->data != key){
            ref = ref->next;
        }
        if(ref->next!=last->next){
             ref->data = up;
        }
        else if(ref->next==last->next && ref->data == key){
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
void traverse(Node* last){
    if(last!=NULL){
        Node* ref= last->next;
        int i=1;
        do{
            printf("\nNode %d : %d",i,ref->data);
            ref = ref->next;
            i++;
        }
        while(ref!=last->next);
    }
    else{
        printf("\nList Is empty!!");
    }
}
void main(){
        int option =0;
        Node* last =NULL;
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
                last = insert_beg(last);
                break;
            case 2:
                last = insert_end(last);
                break;
            case 3:
                printf("Enter The value Of the Node to be inserted after : ");
                scanf("%d",&key);
                last = insert_after(last,key);
                break;
            case 4:
               last = delete_beg(last);
                break;
            case 5:
                last = delete_end(last);
                break;
            case 6:
                printf("Enter The value Of the Node to be Deleted : ");
                scanf("%d",&key);
                last = delete_after(last,key);
                break;
            case 7:
                 printf("Enter The value Of the Node to be Updated: ");
                scanf("%d",&key);
                 printf("Enter The New Value: ");
                scanf("%d",&up);
                update(last,key,up);
                break;
            case 8:
                traverse(last);
                break;
            case 9:
                printf("\nTHANKS FOR THE VISIT!!\n");
                printf("***********************************\n");
            }
        }
}
