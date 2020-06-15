#include <stdio.h>
#include <math.h>

void func(double F(double),double x){
    printf("%3.3f\t%3.3f\n", F(x),x);
}

double square(double x){
    return x*x;
}

double cube(double x){
    return x*x*x;
}

int main(int argc, char **argv){
    func(sin,0.33);
    func(sqrt,2);
    func(cos,0.5);
    func(tan,0.25);
    func(square,5.0);
    func(cube,2.0);
    if (argc > 1){
        printf("-------\n");
        printf("%d\n",argc);
        printf("-------\n");
        for (int i=0 ; i < argc ; i++) {
            printf("%d\t\t%s\n",i,argv[i]);
        }
    }
    return 0;
}
