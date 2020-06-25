#include <stdio.h>
#include <math.h>

// define pi, just use inverse of sin
#define PI -2*asin(-1.0)

// precision for derivative calculation
const double pre = 1e-10;

// define a function that accepts a function
double func(double F(double), double x){
    return F(x);
}

// define a derivative, use constant precision from above
double derivative(double F(double), double x){
    return (F(x+pre)-F(x-pre))/(2.0 * pre);
}

int main(){
    // cycle through denominator..  calculate function and derivative
    for (int i = 1; i<= 10; i++){
        printf("\nFunctions for Pi/%d\n",i);
        printf("sin is: %g\n",func(sin, PI/(double)i));
        printf("cos is: %g\n",func(cos, PI/(double)i));

        printf("\nDerivatives for Pi/%d\n",i);
        printf("sin is: %g\n",derivative(sin, PI/(double)i));
        printf("cos is: %g\n",derivative(cos, PI/(double)i));
    }
    return 0;
}
