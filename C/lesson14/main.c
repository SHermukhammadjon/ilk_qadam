#include <stdio.h>

int main()
{
    // LOGICAL(MANTIQIY) OPERATORLAR
    // &&   ||    !
    // TRRUE ba FALSE
    // TRUE && TRUE = TRUE
    // TRUE && FALSE = FALSE
    // FALSE && TRUE = FALSE
    // FALSE && FALSE = FALSE

    // TRUE || TRUE = TRUE
    // TRUE || FALSE = TRUE
    // FALSE || TRUE = TRUE
    // FALSE || FALSE = FALSE

    // !FALSE -> TRUE
    // !TRUE  ->  FALSE

    
    // QARSHILASHTIRISH OPERATORLARI
    // >, <, >=, <=, ==, !=

    int son1 =10 , son2 = 20;
    printf("%d", (son1 < son2)); // TRUE -> 1
    printf("\n%d", (son1 > son2)); // FALSE -> 0
    printf("\n%d", (10 >= 11)); // FALSE -> 0
    printf("\n%d", (11 >= 11)); // TRUE -> 1
    printf("\n%d", (11 <= 11)); // TRUE -> 1
    printf("\n%d", (11 < 11)); // FALSE -> 0
    


    return 0;
}