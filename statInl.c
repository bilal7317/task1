#include <stdio.h>

static inline long double add(void *a, void *b) {
    long double x = *(long double *)a;
    long double y = *(long double *)b;
    return x + y;
}

int main() {

    long double x, y;
    char a,b;
    printf("\nEnter Values to Sum \n");
    
    printf("Enter a First value: ");
    scanf("%Lf", &x);

    printf("Enter a Second value: ");
    scanf("%Lf", &y);
        
    printf("Sum = %.2Lf\n", add(&x, &y));
    return 0;
}

