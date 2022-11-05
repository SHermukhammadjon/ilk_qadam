#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 10;
    // Qo'shish      +  | son++  ++son | son =+2 | son = son + 2
    // Ayrish        -  | son-- --son  | son -=2 | son = son - 2
    // Ko'paytirish  *  |              | son *=2 | son = son * 2
    // Bo'lish       /  |              | son /=2 | son = son / 2
    // Mod olish     %  |              | son %=2 | son = son % 2

    number += 10;             // 20
    printf("%d", number);

    number -= 13;             // 7
    printf("\n%d", number);

    number *= 3;              // 21
    printf("\n%d", number);

    number /= 3; // 21       // 7
    printf("\n%d", number);



    int son22 = 100;
    printf("\n%d", son22);

    son22 = son22 + 10;      // 110
    printf("\n%d", son22);

    son22 = son22 / 2;
    printf("\n%d", son22);

    son22 = son22 % 2;       // 1
    printf("\n%d", son22);

    int x = 30;
    int y;
    y = x++;
    printf("\n%d\t%d", y, x);


    return 0;
}