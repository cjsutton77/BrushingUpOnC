#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int num){
	for (int i = 0; i < num ; i++){
		printf("%d\t%d\t%p\n",i,arr[i]*arr[i]-arr[i],&arr[i]);
	}
}

void display_reverse(int arr[], int num){
	for (int i = 0 ; i < num ; i++) {
		arr[i] = num - i;
	}
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char** argv){

	int *px = NULL;
	int x = 100;
	px = &x;
	printf("x:\t%d\npx:\t%p\n&x:\t%p\n*px:\t%d\n",x,px,&x,*px);

	int n = 6;
	int *array;
	array = malloc(n * sizeof(int));
	
	for (int i = 0 ; i < n ; i++) array[i] = i;
	display(array,n);
	printf("\n%p\n",array);
	printf("%p\n",&array[0]);

	int c,d;
	c = 10;
	d = 20;
	
	printf("\n%d\t%d\n",c,d);
	swap(&c,&d);
	printf("%d\t%d\n",c,d);
	
	printf("\n%d\t%d\n",array[0],array[3]);
	display_reverse(array,n);
	printf("%d\t%d\n",array[0],array[3]);

	free(array);
	
	return 0;
}


