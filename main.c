#include <stdio.h>
#include <stdlib.h>

int main()
{
int l,c,somac;
l=0;
c=0;
int i,j;
scanf("%d %d",&l,&c);
int M[l][c];
for(i=0;i<l;i++){
    for(j=0;j<c;j++)
    scanf("%d",&M[i][j]);
}
printf("Digite o numero de linhas e colunas da matriz:\n");
printf("Digite os elementos da matriz:\n");
for(j=0;j<c;j++){
  somac=0;
    for(i=0;i<l;i++){
    somac=somac+M[i][j];
    }
    printf("Soma da coluna %d: %d\n",j+1,somac);
}




return 0;
}
