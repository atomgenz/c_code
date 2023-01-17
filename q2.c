
#include <stdio.h>
int main() {
    float A,R,T;
    
    // Recive input 
    printf("Enter Principal amount");
    scanf("%f",&A);
    printf("Enter Rate of interest");
    scanf("%f",&R);
    printf("Enter time");
    scanf("%f",&T);
 
    // Calculate simple interest
    float SI = (A * T * R) / 100;
 
    // Print Simple Interest
    printf("Simple Interest = %f\n", SI);

    return 0;
}