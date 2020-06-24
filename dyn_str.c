#include <stdio.h>
#include <stdlib.h>

int main(void){
    int len;
    printf("Please enter the number of bytes to allocate:\t");
    scanf("%d",&len);

    char *str = (char*)malloc(len * sizeof(char));

    for (int i = 0 ; i < len ; i++){
        if (i == len - 1) *(str+i) ='\0';
        else *(str+i) = getchar(); 
    }
    printf("\n\nString is %s\n",str);
    free(str);
    return 0;
}
