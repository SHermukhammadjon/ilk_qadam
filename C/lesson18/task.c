#include <stdio.h>

int main()
{
    //Askarlar uchun qabul dasturi
    //Erkak bo'lsa va Bo'yi 170sm dan baland bo'lsa qabul qilnsin
    //Ayol bo'lsa va Bo'yi 160 sm dan baland bo'lsa qabul qilnsin
    
    int buy;
    char jins;
    char ism[50];
    int vazin;

    printf("Iltimos ismingizni kiriting \n>");
    scanf("%s", ism);
    printf("\nIltimos jinsingizni kiriting (a/e) \n>");
    scanf(" %c", &jins);
    printf("\nIltimos  bo'yingizni kiriting \n>");
    scanf("%d", &buy);
    printf("\nIltimos  vaznngzni kiriting \n>");
    scanf("%d", &vazin);

    if(jins == 'e' && buy >= 170 && vazin >= 80)
    {
        printf("Tabriklaymiz Janob %s. Qabul qilindingiz!", ism);
    }
    else if(jins == 'a' && buy >= 160 && vazin >= 60)
    {
        printf("Tabriklaymiz xonim %s. Qabul qilindingiz!", ism);
    }
    else
    {
        printf("%s afsuski qabul qilinmadingiz !", ism);
    }
    //uyga vazifa vazin qo'shish
    // E -> 80
    // A -> 60
    // qabul qilnmadingiz

    return 0;
}
