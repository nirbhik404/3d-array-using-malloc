#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,p;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&p);
    int***matrice;
    matrice=(int***)malloc(m*sizeof(int**));
    for(int i=0;i<m;i++){
        matrice[i]=(int**)malloc(n*sizeof(int*));
        for(int j=0;j<n;j++){
            matrice[i][j]=(int*)malloc(p*sizeof(int));
        }
            }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<p;k++){
                scanf("%d",&matrice[i][j][k]);
            }
        }
    }
    return 0;
}