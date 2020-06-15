#include <stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int unsort[], int n, int stop){
    int minimum;
    for (int i = 0; i < n - 1; i++){
        minimum=i;
        for (int j = i + 1; j < n ; j++){
            if (unsort[j] < unsort[minimum]) {
                minimum = j;
            }
        }
        swap(&unsort[minimum],&unsort[i]);
        if (stop-1 == i) break;
    }
}

int main(){
	int arr_size, state;
	scanf("%d %d", &arr_size,&state);
	int arr[arr_size];
	int minimum;
	
	for (int i = 0 ; i < arr_size ; i++){
		scanf("%d",&arr[i]);
	}
    
    selection_sort(arr,arr_size,state);

    for (int i = 0 ; i < arr_size ; i++){
        printf("%d ",arr[i]);
    }

	return 0;
}


