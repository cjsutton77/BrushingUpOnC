
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("Please input an allocation size in bytes:\t");
	long n;
	scanf("%ld",&n);
	int *pNum = (int*)malloc(n * sizeof(int));
	if (!pNum) {
		printf("Insufficent Memory\n");
		return -1;
	}
	else {
		printf("%p\n",pNum);

		for (long i = 0 ; i<n;i++){
			//printf("%p, %d\n", (pNum+i), *(pNum+i));
			*pNum = i;
		}
		printf("%p\n",pNum + n);
		printf("%ld\n",(pNum+n)-pNum);
		printf("%p\n",pNum);
		free(pNum);
		return 0;
	}
}
