#include <stdio.h>

int main()
{
    //ASCCI table;

    // int son =71; //G
    // printf("%c", son);

    // char belgi = 'k';
    // printf("\n%d\n", belgi);

    // 65 - 90 -> Katta harif
    // 97 97   -> 122 Kichkina harif

    char belgi;

    printf("\nKatta yoki kichik harif kiriting\n>");
    scanf("%c", &belgi);

    int decimalHarif = belgi;

    if(decimalHarif >= 65 && decimalHarif <= 90)
    {
        printf("\n%c harfi _> KATTTA\n", belgi);
    }
    else if(decimalHarif >= 97 && decimalHarif <= 122)
    {
        printf("\n%c harfi _> KICHIK\n", belgi);
    }
    else
    {
        printf("\nTo'g'ri qiymat kiriting\n");
    }

    
    return 0;
}