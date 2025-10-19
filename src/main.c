#include <stdio.h>

void sort(int arr[], int len){
    for (int i = 0; i < len-1; i++){
        for (int j = 0; j < len-i-1; j++){
            if (arr[j+1] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    const int MAX_SIZE = 100;
    int rc;
    int arr[MAX_SIZE];
    int i = 0;
    while (i < MAX_SIZE && (rc = scanf("%d", &arr[i])) == 1){
        i++;
        if (rc != 1){
            break;
        }
        if (getchar() == '\n') {
            break;
        }
    }
    sort(arr, i);
    for(int m = 0; m < i; m++){
        printf("%d ", arr[m]);
    }
    return 0;
}
