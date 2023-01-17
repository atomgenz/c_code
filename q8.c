
#include <stdio.h>
int main() {
    int num;
    
    // Recive input 
    printf("Enter a number between 1 & 7 : ");
    scanf("%d",&num);

    if (num >= 1 && num <= 7) {
      switch (num) {
        case 1 : printf("Sunday");
        break;
        case 2 : printf("Monday");
        break;
        case 3 : printf("Tuesday");
        break;
        case 4 : printf("Wednesday");
        break;
        case 5 : printf("Thursday");
        break;
        case 6 : printf("Friday");
        break;
        case 7 : printf("Saturday");
      }
    } else printf("Entered number is not between 1 & 7");

    return 0;
}