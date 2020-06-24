#include <stdio.h>

void square(int *num){
	printf("%d\n",*num);
	*num = (*num) * (*num);
	printf("%d\n",*num);
	}

int count(const char *string){
	printf("%p\n",string);
	int counter = 0;
	printf("\n%lu\n",sizeof(string));
	for (; *string != '\0'; ++string){
		printf("%c\n",*string);
		++counter;
	}
	return counter;
}
int main() {
	char str[100];
	printf("Please input a string:\t");
	scanf("%s",str);
	printf("%p\n",&str);
	printf("%s\n",str);
	printf("number of characters: %d\n",count(str));
	
	int x;
	printf("Please input a number:\t");
	scanf("%d",&x);
	square(&x);
	printf("%d\n",x);
	return 0;
}

