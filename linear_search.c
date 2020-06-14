#include <stdio.h>

int main(){
	int num,arr_len;
	scanf("%d %d", &arr_len, &num);
    int arr[arr_len];
	for (int i = 0; i < arr_len; i++) {
		scanf("%d", &arr[i]);
    }
    for (int i = arr_len-1 ; i >= 0 ; i--){
        if (num == arr[i]){
            printf("%d",i+1);
            break;
        }
        if (i == 0){
            printf("%d",-1);
        }
    }

	return 0;
}
