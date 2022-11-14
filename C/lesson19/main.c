#include <stdio.h>

int main()
{
    //Ulgurji savdo markazi uchun dastur
    // 0   - 100 dona   -> 3$
    // 100 - 200 dona   -> 2.5$
    // 200 - 300 dona   -> 2$
    // 300 - 400 dona   -> 1.25$
    // 400 - ... dona   -> 0.75$
    
    int dona;
    double dNarx;

    printf("Nechta mahsulot olasiz?\n>");
    scanf("%d", &dona);

    if(dona > 400 ){dNarx = 0.75;}
    else if(dona >= 300 && dona <= 400) {dNarx = 1.25;}
    else if(dona >= 200 && dona <= 299) {dNarx = 2;}
    else if(dona >= 100 && dona <= 199) {dNarx = 2.5;}
    else if(dona >= 0 && dona <= 99)    {dNarx = 0.75;}
    else{printf("Iltimos to'g'ri qiymat kiriting!");}

    double jamiNarx = dona * dNarx;
    printf("Jami narx: %.2lf $", jamiNarx);
    
    // chegirma
    int chegirmaNarxi = jamiNarx;
    printf("\nchegrma bilan narx: %d $", chegirmaNarxi);

    //chegirma qiymati
    printf("\nchegrma : %.2lf $", jamiNarx - chegirmaNarxi);


    
    return 0;
}