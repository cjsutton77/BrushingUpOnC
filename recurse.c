#include <stdio.h>
#include <stdlib.h>

size_t fibo(size_t n){
    if (n == 1 || n == 2){
        return 1;
    }
    else {
        return fibo(n-2) + fibo(n-1);
    }
}

int main(int argc, char* argv[]){
    printf("Please input a number:\t");
    size_t num;
    scanf("%zu",&num);
    printf("The %zu number is %zu.\n",num,fibo(num));
    return 0;
}
