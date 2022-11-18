#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son1, son2;
    char tanlov;
    bosh:
        printf("Iltimos 1-sonni kiriting\n>>>");
        scanf("%d", &son1);
        printf("Iltimos 2-sonni kiriting\n>>>");
        scanf("%d", &son2);
        printf("+\n-\n*\n/\nIltimos quydagi amallardan birni tanlang\n(chiqish uchun esa q kiriting)\n>>>");
        scanf(" %c", &tanlov);

        if(tanlov == 'q')
            {
            goto chqish;
            }

        switch(tanlov)
            {
            case '+':
                printf("Javob: %d\n", son1 + son2);
                break;
            case '-':
                printf("Javob: %d\n", son1 - son2);
                break;
            case '*':
                printf("Javob: %d\n", son1 * son2);
                break;
            case '/':
                printf("Javob: %d\n", son1 / son2);
                break;
            default:
                printf("Iltimos to'g'ri amal kiriting!\a\n");
                break;
            }
        goto bosh;
    
    chqish:

    printf("!!! Xayir !!!\a\n");

    return 0;
}