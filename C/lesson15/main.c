#include <stdio.h>

int main()
{
    //Ko'paytrish jadvali;

    int s = 1;

    while (s < 11)
    {
        printf("2 x %d = %d\t", s, s*2);
        printf("3 x %d = %d\t", s, s*3);
        printf("4 x %d = %d\t", s, s*4);
        printf("5 x %d = %d\t", s, s*5);
        printf("6 x %d = %d\t", s, s*6);
        printf("7 x %d = %d\t", s, s*7);
        printf("8 x %d = %d\t", s, s*8);
        printf("9 x %d = %d\t", s, s*9);
        // printf("10 x %d = %d\t", s, s*10);
        printf("\n");
        s += 1;
    }
    
    
    
    return 0;
}