#include <stdio.h>
struct sNode {
    int data;
    struct sNode* left;
    struct sNode* right;
};
typedef struct sNode Node;
Node* create_node(int elem){
    Node* newnode = (Node* )malloc(sizeof(Node* ));
    newnode->data = elem;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
Node* insert_node(Node* root,int key){

    if(root!=NULL){
        if(key < root->data){
            root->left = insert_node(root->left,key);
        }
        else{
            root->right = insert_node(root->right,key);
        }
    }
    else{
        Node* new_node=create_node(key);
         return new_node;
    }
}

int maxDepth(Node* root){
   if (root==NULL)
       return 0;
   else
   {
       /* compute the depth of each subtree */
       int lDepth = maxDepth(root->left);
       int rDepth = maxDepth(root->right);

       /* use the larger one */
       if (lDepth > rDepth)
           return(lDepth+1);
       else return(rDepth+1);
   }
}
int getLeafCount(Node* root)
{
  if(root == NULL)
    return 0;
  if(root->left == NULL && root->right==NULL)
    return 1;
  else
    return getLeafCount(root->left)+
           getLeafCount(root->right);
}
Node* find(Node* root,int key){
    if(root==NULL || root->data == key){
        return root;
    }
    else{
        if(root->data>key){
            return find(root->left,key);
        }
        else{
            return find(root->right,key);
        }
    }
}
Node* minvalue(Node* root){
    Node* ref = root;
    if(ref!=NULL){
        while(ref->left!=NULL){
            ref = ref->left;
        }
    }
    return ref;
}
Node* delete_node(Node* root , int key){
    if(root==NULL){
        return root;
    }
    if(root->data >key){
        root->left= delete_node(root->left,key);
    }
    else if(root->data < key){
        root->right = delete_node(root->right,key);
    }
    else{
        if(root->left==NULL){
            Node* tmp = root->right;
            free(root);
            return tmp;
        }
        else if(root->right==NULL){
            Node* tmp = root->left;
            free(root);
            return tmp;
        }
        Node* tmp = minvalue(root->right);
        root->data = tmp->data;
        root->right = delete_node(root->right,tmp->data);
    }
    return root;
}
void inorder(Node* root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}
void preorder(Node* root)
{
    if (root != NULL)
    {
        printf("%d \n", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node* root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d \n", root->data);
    }
}
void main(){
    Node* root = NULL;
    int option=0;
    int num,num2,h,leav;
    while(option!=9){
        printf("\n===================BST OP====================");
        printf("\n1) Insert");
        printf("\n2) Inorder Traversel");
        printf("\n3) Preorder Traversel");
        printf("\n4) Postorder Traversel");
        printf("\n5) Search Node");
        printf("\n6) Delete Node");
        printf("\n7) Height of tree");
        printf("\n8) Leaves of tree");
        printf("\n9) Exit\n");
        scanf("%d",&option);
        switch(option){
        case 1:
            printf("\nEnter the value of node: ");
            scanf("%d",&num);
            root = insert_node(root,num);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            printf("\nEnter the value of node to be searched: ");
            scanf("%d",&num);
            Node* ref = find(root,num);
            if(ref!=NULL){
                printf("\nNode Found");
            }
            else{
                printf("\n Node Not Found!!");
            }
            break;
        case 6:
            printf("\nEnter the value of node to be Deleted: ");
            scanf("%d",&num);
            root = delete_node(root,num);
        case 7:
            h = maxDepth(root);
            printf("Height Of the Tree : %d\n",h);
            break;
        case 8:
            leav = getLeafCount(root);
            printf("Leaves Of the Tree : %d\n",leav);
            break;
        case 9:
            printf("\nTHNAKS FOR VISIT !!");
            break;
        }
    }
}
