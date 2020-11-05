#include <stdio.h>
#include <stdlib.h>

struct{
    int enlist[20][3];
    int finallist[20][3];

}a;

//SORT
void sort(int u){
    for(int y=0;y<u;y++){
            for(int z=y+1;z<u;z++){
                if(a.enlist[y][2]>a.enlist[z][2]){
                   int i=0;
                    for (i = 0; i < 3; ++i){
                        int c;
                        c = a.enlist[y][i];
                        a.enlist[y][i] = a.enlist[z][i];
                        a.enlist[z][i] = c;
                    }
                }
            }
        }

}

 //Finding Minimum Weight

int minweight(int u, int x){
    int sc;
    for(int w=0;w<u;w++){
            sc = search(a.finallist,a.enlist[w][0],x);
            if(sc==0 && a.enlist[w][0] != a.enlist[w][1]){
                for(int q=0;q<3;q++){
                    a.finallist[x][q] = a.enlist[w][q];
                }
                x++;
            }
        }
         return x;
}
int search(int finallist[10][3],int k,int u){
    int found = 0;
    for(int w=0;w<u;w++){
        if(finallist[w][0] == k){
            found =1;
        }
    }
    if(found==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int sc;
    int x=0;
    int sum =0;
    int u=0;
    int k =0;
    int v =0;

    printf("Enter The Number of Vertices: ");
    scanf("%d",&v);
    int adjmatrix[v][v];

    for(int t =0;t<v;t++){
        adjmatrix[t][t]=0;
        for(int a=0;a<t;a++){
            printf("Enter The Weight of %d -- %d : ",t,a);
            scanf("%d",&adjmatrix[t][a]);
            adjmatrix[a][t]=adjmatrix[t][a];
        }
    }




        for(int i=0;i<v;i++){
            for(int j=0;j<i;j++){
                    k=0;
                if(adjmatrix[i][j]!=0){
                     a.enlist[u][k++] = i;
                    a.enlist[u][k++] = j;
                     a.enlist[u][k++] = adjmatrix[i][j];
                    u++;
                }
            }
        }


        sort(u);
        x = minweight(u,x);






    // Final Print
        printf("\n------------------------------\n");\
        printf("\n Final Path for Minimum Spanning Tree\n");
       for(int y=0;y<x;y++){
            sum = sum + a.finallist[y][2];
            for(int e=0;e<3;e++){
                printf("%d ",a.finallist[y][e]);
                if(e==0){
                    printf("-- ");
                }
                else if(e==1){
                    printf(" ==> ");
                }
            }
            printf("\n");
        }
        printf("\n\nTotal Weight of Minimum Spanning Tree: %d",sum);

    }
