#include <stdlib.h>
#include <stdio.h>

int printarr(int arr[], int len);
double avgArr(int arr[], int len);
int copy(int arr[], int copy[], int len);


int printarr(int arr[], int len){
    printf("[");
    int x;
    for(x = 0; x < len; x++){
        if(x == len - 1){
            printf("%i", arr[x]);
        }else{
        printf(" %i ", arr[x]);
        }
    }
    printf("]");
    return 0;
}

double avgArr(int arr[], int len){
    int count = 0;
    double final;
    int x;
    for(x = 0; x < len; x++){
        count += arr[x];
    }
    final = (double) count / len;
    return final;
}
int copy(int arr[], int copy[], int len){
    int x;
    for(x = 0; x < len; x++){
        copy[x] = arr[x];
    }
    return 0;
}

int main(){
    int arr[5] = {1,3,5,7,9};
    int len = 5;
    printarr(arr, len);
    printf("\n");
    printf("%f", avgArr(arr, len));
    int copyarr[5];
    copy(arr, copyarr, len);
    printf("Copied\n");
    printarr(copyarr, len);
    return 0;
}
