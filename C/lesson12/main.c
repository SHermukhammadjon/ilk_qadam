#include <stdio.h>

int main()
{
    //Askarlar uchun qabul dasturi
    //Erkak bo'lsa va Bo'yi 170sm dan baland bo'lsa qabul qilnsin
    //Ayol bo'lsa va Bo'yi 160 sm dan baland bo'lsa qabul qilnsin
    
    int buy;
    char jins;
    char ism[50];

    printf("Iltimos ismingizni kiriting \n>");
    scanf("%s", ism);
    printf("\nIltimos jinsingizni kiriting (a/e) \n>");
    scanf(" %c", &jins);
    printf("\nIltimos  bo'yingizni kiriting \n>");
    scanf("%d", &buy);

    if(jins == 'e' || jins == 'E' && buy >= 170)
    {
        printf("Tabriklaymiz Janob %s. Qabul qilindingiz!", ism);
    }
    else if(jins == 'a' || jins == 'E' && buy >= 160)
    {
        printf("Tabriklaymiz xonim %s. Qabul qilindingiz!", ism);
    }
    else
    {
        printf("Malumotlarni to'g'ri kiriting!");
    }
    //uyga vazifa vazin qo'shish
    // E -> 80
    // A -> 60

    return 0;
}
