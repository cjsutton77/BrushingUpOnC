#include <stdio.h>

void swappy(int *a, int *b) {
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main (int argc, char* argv[]) {

    int Age = 43;
    int *pAge = &Age;
    int *pAge_2 = pAge;
    printf("Age:\t\t%d\n",Age);
    printf("pAge:\t\t%p\n",pAge);
    printf("*pAge:\t\t%d\n",*pAge);
    printf("&Age:\t\t%p\n",&Age);
    printf("pAge_2:\t\t%p\n",pAge_2);
    printf("*pAge_2:\t%d\n",*pAge_2);

    int A = 5;
    int B = 10;

    int *pA = &A;
    int *pB = &B;
    printf("A,B:\t\t%d\t%d\n",A,B);
    swappy(&A,&B);
    printf("A,B:\t\t%d\t%d\n",A,B);

    return 0;
}
