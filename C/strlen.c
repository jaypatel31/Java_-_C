#include <stdio.h>
struct index{
    int i;
}s;
int find_len(char str[],int index);
void main(){
    char str[20];
    printf("Enter The String : ");
    gets(str);
    int len;
    len = find_len(str,0);
    printf("%d",len);
}
int find_len(char str[],int index){
    if(str[s.i]=='\0'){
        return s.i;
    }
    else{
        s.i++;
        find_len(str,s.i);
    }
}
