
#include <stdio.h>
int main() {
    int i = 1, num;
    
    // Recive input 
    printf("Enter a number ");
    scanf("%d",&num);

    while (i <= 10) {
      printf("%d x %d = %d\n", i, num, i*num);
      i++;
    }

    return 0;
}