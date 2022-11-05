#include <stdio.h>

int main()
{
    int tomon;
    printf("To'rburchakning tomonini kiriting\n>>");
    scanf("%d", &tomon);
    // int javob = tomon * tomon;
    printf("\nJavob: %d\n", tomon*tomon);

    int tomon1, tomon2;
    printf("\nTo'rburchakning 1-tomonini kiriting:\n>>");
    scanf("%d", &tomon1);
    printf("\nTo'rburchakning 2-tomonini kiriting:\n>>");
    scanf("%d", &tomon2);

    printf("to'rburchakning yuzi %dga teng!", tomon1 * tomon2);

    return 0;
}