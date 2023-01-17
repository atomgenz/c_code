
#include <stdio.h>
int main() {
    float cprice,sprice,diff;
    
    // Recive input 
    printf("Enter cost price ");
    scanf("%f",&cprice);
    printf("Enter selling price ");
    scanf("%f",&sprice);
    
    diff = sprice - cprice;
    if (diff > 0) printf("Profit = %f\n", diff);
    else printf("Loss = %f\n", -diff);

    return 0;
}