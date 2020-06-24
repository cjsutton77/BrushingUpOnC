#include <stdio.h>

long factorial(int num) {
    if (num == 0) {
        return 1;
    }
    else {
        printf("Pointer: %p for %d\n",&num,num);
        return num * factorial(num - 1);
    }
}

int main (int argc, char* argv[]) {
    printf("%s\n",argv[1]);
    printf("%ld\n",factorial(15));
    return 0;
}
