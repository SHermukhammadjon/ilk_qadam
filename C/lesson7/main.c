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

    int son1, son2;
    scanf("%d%d", &son1, &son2);
    printf("%d\n", son1 + son2);

    double son3, son4;
    scanf("%lf%lf", &son3,&son4);
    printf("\n%2.f", son3-son4);

    return 0;
}