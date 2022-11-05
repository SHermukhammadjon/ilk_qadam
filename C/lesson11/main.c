#include <stdio.h>

int main()
{
    double soat;
    printf("Necha soatni sonyasini ko'rmoqchisiz?\n>>");
    scanf("%lf", &soat);
    int javob = soat * 3600;
    printf("\n%1.lf soat %d sonyaga teng!\n", soat, javob);

    return 0;
}