#include<stdio.h>
void swap(int*arr , int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void bubblesort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr,j,j+1);
            }
            
        }
        
    }
    
}
int main(){
    int arr[]={19,93,20,88,10,12,16,5,4};
    int n = sizeof (arr)/ sizeof(arr[0]);
    bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}