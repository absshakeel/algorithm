#include<stdio.h>
void bubble_short(int arr[],int n){
    for(int i = 0; i<n-1;i++){
        for(int j = 0;j< n - 1 - i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble_short(arr,n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
