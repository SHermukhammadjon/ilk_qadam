#include <stdio.h>

int main()
{
    //SWWITCH CASE

    int tanlov;
    printf("son kiriting \n>");
    scanf("%d", &tanlov);

    switch (tanlov)
    {
        case 1:
            printf("1-tanlov amalga oshirildi !\n");
            break;
        case 2:
            printf("2-tanlov amalga oshirildi !\n");
            break;
        case 3:
            printf("3-tanlov amalga oshirildi !\n");
            break;
        default:
            printf("Tanlo'v noto'g'ri liritildi!\n");
            break;
    }

    return 0;
}