#include <stdio.h>

int main()
{
    int son;
    printf("son:\n>");
    scanf("%d", &son);

    if(son % 10 == 0)
    {
        printf("\n%d soni 10 ga qoldiqsiz bo'linadi", son);  
    }
    else
    {
        printf("\n%d soni 10 ga qoldiqsiz bo'linmaydi", son);
    }

    if(son % 2 == 0)
    {
        printf("\n%d juft son", son);
    }
    else
    {
        printf("\n%d toq son");
    }

    return 0;
}