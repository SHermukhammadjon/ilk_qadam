#include <stdio.h>

int main()
{
    // VAARIABLE -> o'zgaruvchi
    // char -> character
    //1 byte
    char belgi = 'a';
    // printf("%c\n", belgi);
    belgi = 'b';
    // printf("%c", belgi);

    //char -> char seriya
    // ... byt
    char qiymat[6] = "Najot";
    // printf("\n%s", qiymat);

    // int -> integer -> butun son
    //4 byte
    int raqam = 35;
    // printf("%d\n", raqam);

    //float -> qoldiq son
    //4 byte
    float pi = 3.14;
    // printf("%.2f", pi);

    //double -> Katta hajimli qoldiq son
    //8 byte
    double qoldiq = 5.67;
    // printf("\n%.2lf\n", qoldiq);

    int son1 = 23 ;
    float qoldi = 65.9;
    double kqoldi = 55.7;
    char belgi1 = 'Z';
    char belgilarseryasi[20] = "Yupiter";

    printf("%d ning RAMdagi egallagan xajmi: %d byte!\n", son1, sizeof(son1));
    printf("%f ning RAMdagi egallagan xajmi: %d byte!\n", qoldi, sizeof(qoldi));
    printf("%lf ning RAMdagi egallagan xajmi: %d byte!\n", kqoldi, sizeof(kqoldi));
    printf("%c ning RAMdagi egallagan xajmi: %d byte!\n", belgi1, sizeof(belgi1));
    printf("%s ning RAMdagi egallagan xajmi: %d byte!\n", belgilarseryasi, sizeof(belgilarseryasi));

    return 0;
}