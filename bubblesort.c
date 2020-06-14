#include <stdio.h>

int bubble(int n,int arr[]);

int main(){
	int num;
	scanf("%d", &num);     
	int numArray[num];
	for (int i = 0 ; i < num ; i++){
		scanf("%d",&numArray[i]);
	}
	printf("%d",bubble(num, numArray));
	return 0;
}

int bubble(int n, int arr[]){
	int count = 0;
	int i = 0;
	int temp,flag = 0;
	while(1){
		flag = 0;
		for (i = 0 ; i < n-1 ; i++) {
			if (arr[i] > arr[i+1]) {
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				count++;
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
	return count;
}
