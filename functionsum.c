#include <stdio.h>

int main() {
    int deg1, deg2, maxDeg, i;

    // Input degree of first polynomial
    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &deg1);
    int poly1[deg1 + 1];
    printf("Enter the coefficients of first polynomial (highest to lowest degree):\n");
    for (i = 0; i <= deg1; i++) {
        scanf("%d", &poly1[i]);
    }

    // Input degree of second polynomial
    printf("Enter the degree of the second polynomial: ");
    scanf("%d", &deg2);
    int poly2[deg2 + 1];
    printf("Enter the coefficients of second polynomial (highest to lowest degree):\n");
    for (i = 0; i <= deg2; i++) {
        scanf("%d", &poly2[i]);
    }

    // Find max degree
    maxDeg = (deg1 > deg2) ? deg1 : deg2;
    int sum[maxDeg + 1];

    // Initialize sum array with 0
    for (i = 0; i <= maxDeg; i++) {
        sum[i] = 0;
    }

    // Add coefficients of first polynomial
    for (i = 0; i <= deg1; i++) {
        sum[maxDeg - deg1 + i] += poly1[i];
    }

    // Add coefficients of second polynomial
    for (i = 0; i <= deg2; i++) {
        sum[maxDeg - deg2 + i] += poly2[i];
    }

    // Print the resulting polynomial
    printf("Sum of polynomials: ");
    for (i = 0; i <= maxDeg; i++) {
        if (sum[i] != 0) {
            printf("%s%d", (i != 0 && sum[i] > 0) ? " + " : "", sum[i]);
            if (maxDeg - i > 0)
                printf("x^%d", maxDeg - i);
        }
    }

    printf("\n");

    return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 
