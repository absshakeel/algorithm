#include<stdio.h>

int partition(int arr[],int l,int h){
    int pivot = arr[l];
    int i = l, j = h;
    while(i<j){

        while(arr[i] <= pivot && i < h){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
        int temp = arr[l];
        arr[l] = arr[j];
        arr[j] = temp;
    
    
    return j;
}

void quick_sort(int arr[],int l,int h){
    if(l<h){
        int j = partition(arr,l,h);
        quick_sort(arr,l,j-1);
        quick_sort(arr,j+1,h);
    }

}
int main(){
    int n;
    printf("Input Numbers of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input Elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int l = 0, h= n -1;
    quick_sort(arr, l, h);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}