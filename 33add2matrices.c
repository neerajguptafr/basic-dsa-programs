#include<stdio.h>
int main()
{
    int n,i,j,x,y;
    printf("enter number of rows :");
    scanf("%d",&x);
    printf("enter number of columns :");
    scanf("%d",&y);
    int arr[x][y],brr[x][y],crr[x][y];
    printf("enter elements of matrix 1 :");
    for ( i = 0; i < x; i++)   
    {
     for ( j = 0; j < y; j++)
     {
        scanf("%d",&arr[i][j]);
     }
    }
    printf("enter elements of matrix 2 :");
    for ( i = 0; i < x; i++)   
    {
     for ( j = 0; j < y; j++)
     {
        scanf("%d",&brr[i][j]);
     }
    }
    printf("matrix 1\n");
    for ( i = 0; i < x; i++)   
    {
     for ( j = 0; j < y; j++)
     {
        printf("%d ",arr[i][j]);
     }
        printf("\n");
    }
    printf("matrix 2\n");
    for ( i = 0; i < x; i++)   
    {
     for ( j = 0; j < y; j++)
     {
        printf("%d ",brr[i][j]);
     }
        printf("\n");
    }
    printf("adiition of both the matrices\n");
    for ( i = 0; i < x; i++)   
    {
     for ( j = 0; j < y; j++)
     {
        crr[i][j] = arr[i][j]+brr[i][j];
     }
    }
    for ( i = 0; i < x; i++)   
    {
     for ( j = 0; j < y; j++)
     {
        printf("%d ",crr[i][j]);
     }
        printf("\n");
    }
   return 0;
}