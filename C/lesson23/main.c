#include <stdio.h>

int main()
{
    // printf("\nIltimos fasil tanlang.");
    // printf("\n1.Qish\n2.Bahor\n3.Kuz\n4. Yoz\n>");
    // int fasil;
    // scanf("%d", &fasil);

    // switch(fasil)
    // {
    //     case 1:
    //         printf("Havo juda sovuq !\n");
    //         break;
    //     case 2:
    //         printf("Hava iliq va yoqimli !\n");
    //         break;
    //     case 3:
    //         printf("havo iliq va namli !\n");
    //         break;
    //     case 4:
    //         printf("Juda issiq hamma yer !\n");
    //         break;
    //     default:
    //         printf("Iltimos to'g'ri malumot kiriting !!!\n");
    // }
        


    //SWITCH CASE LARDA CHAR ISHLATISH;
    char belgi;
    printf("\nIltimos Bosh harifni kiriting:\n>>>");
    scanf("%c", &belgi);

    switch (belgi)
    {
    case 'a':
        printf("Xush kelibsiz Ali. \n");
        break;
    case 'b':
        printf("Xush kelibsiz Behruz. \n");
        break;
    case 'd':
        printf("Xush kelibsiz Dilshod. \n");
        break;
    
    default:
        printf("Bunday foydalanuvchi mavjud emas!!\n\a");
        break;
    }

    return 0;
}