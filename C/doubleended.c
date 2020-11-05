#include <stdio.h>
#define MAX 5
//*******STRUCUTRE********
struct stack {
    int elem[MAX];
    int front,rear;
};
typedef struct stack STACK;
STACK s;
//**********ALL FUNCTION*********
void enqueue_rear(int new_elem);
void enqueue_front(int new_elem);
int isFull();
int isEmpty();
int dequeue_front();
int dequeue_rear();
int peek();
void traverse();
//**********MAIN FUNCTION*********
int main(){
    int option =1,choice,new_elem,num,dip;
    s.front = -1;
    s.rear = -1;
    top:
    while(option){
        printf("\n\n*************QUEUE OP**************");
        printf("\n1 ===> ENQUEUE_REAR\n");
        printf("\n2 ===> DEQUEUE_FRONT\n");
        printf("\n3 ===> PEEK\n");
        printf("\n4 ===> TRAVERSE\n");
        printf("\n5 ===> ENQUEUE_FRONT\n");
        printf("\n6 ===> DEQUEUE_REAR\n");
        printf("\n7 ===> EXIT\n");
        printf("***********************************");
        option =0;
    }
    printf("\nEnter the Value to Perform Operation : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter the Value to EnQueue: ");
            scanf("%d",&new_elem);
            enqueue_rear(new_elem);
            break;
        case 2:
            num = dequeue_front();
            if(num!= -1){
                printf("\nElement Which is DeQueue : %d",num);
            }
            break;
        case 3:
             dip = peek();
             printf("\nFront Element In The Queue : %d",dip);
             break;
        case 4:
            traverse();
            break;
        case 5:
            printf("Enter the Value to EnQueue: ");
            scanf("%d",&new_elem);
            enqueue_front(new_elem);
            break;
        case 6:
             num = dequeue_rear();
            if(num!= -1){
                printf("\nElement Which is DeQueue : %d",num);
            }
            break;
        case 7:
            printf("\nThanks for Visit");
            return 0;
    }
    printf("\nTo Continue Press 1 : ");
    scanf("%d",&option);
    goto top;
}
//********MAIN FUNCTION END************
//*******ISFULL FUNC************
int isFull(void){
    if(s.rear == MAX-1){
        return 1;
    }
    return 0;
}
//*******ISEMPTY FUNC************
int isEmpty(){
    if(s.front == -1 || s.front>s.rear){
        return 1;
    }
    return 0;
}
//*******PUSH FUNC************
void enqueue_rear(int new_elem){
    if(!isFull()){
        s.elem[++s.rear] = new_elem;
         if(s.front==-1){
            s.front=0;
        }
    }

    else{
        printf("\nQueue OVERFLOW\n");
    }
}
void enqueue_front(int new_elem){

        if(s.front==-1){
            s.front=0;
            s.elem[++s.rear] = new_elem;
        }
        else if(s.front!=0){
           --s.front;
           s.elem[s.front] =new_elem;
        }
    else{
        printf("\nQueue OVERFLOW\n");
    }
}
//*******POP FUNC************
int dequeue_front(void){
    if(!isEmpty()){
        int num = s.elem[s.front];
        if(s.front==s.rear){
            s.front=-1;
            s.rear=-1;
        }else{
            s.front=s.front+1;
        }
        return num;
    }
    return -1;
}
int dequeue_rear(void){
    if(!isEmpty()){
        int num = s.elem[s.rear];
        if(s.front==s.rear){
            s.front=-1;
            s.rear=-1;
        }else{
            s.rear=s.rear-1;
        }
        return num;
    }
    return -1;
}
//*******PEEK FUNC************
int peek(void){
    return s.elem[s.front];
}
//*******TRAVERSE FUNC************
void traverse(void){
    int i;
    if(!isEmpty()){
        for(i=s.front;i<=s.rear;i++){
            printf("\nQueue %d : %d",i,s.elem[i]);
        }
    }
}
