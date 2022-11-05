#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son = 10;
    // Qo'shish      +  | son++  ++son | son =+2 | son = son + 2
    // Ayrish        -  | son-- --son  | son -=2 | son = son - 2
    // Ko'paytirish  *  |              | son *=2 | son = son * 2
    // Bo'lish       /  |              | son /=2 | son = son / 2
    // Mod olish     %  |              | son %=2 | son = son % 2

    // int son1, son2;
    // scanf("%d%d", &son1, &son2);
    // printf("%d\n", son1 % son2);

    // son++;
    // ++son;
    // printf("%d\n%d", son++, son);
    // printf("%d\n%d", ++son, son);

    // printf("%d\n%d", son--, son);
    // printf("%d\n%d", --son, son);

    printf("%d\n", --son); //9
    printf("%d\n", son--); //9 -> 8
    printf("%d\n", --son); //7

    return 0;
}