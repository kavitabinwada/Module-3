/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
int main(){
    int i,j,N;
    printf("enter n:");
    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        if(j%2 == 1)
        {
        printf("1");
        }
        else
        {
         printf("0");   
        }
    }
    printf("\n");
}