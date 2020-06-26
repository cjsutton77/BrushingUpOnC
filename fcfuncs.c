#include <stdio.h>
#include <stdlib.h>

void printNum(int nbr){
    printf("%d\n",nbr);
}

void myFunc(void f(int), int n){
    for(int i = 0; i< n; i++){
        f(i);
    }
}

int main(int argc, char* argv[]){
    int s = atoi(argv[1]);
    myFunc(printNum,s);
    return 0;
}
