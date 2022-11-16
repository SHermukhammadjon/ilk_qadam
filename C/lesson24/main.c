#include <stdio.h>

int main()
{
    // input -> Oyning sonni kiriting -> 3
    // output -> bahor faslining mart oyi

    int oyraqami;
    printf("\n Oyning raqamini kiriting :\n>>>");
    scanf("%d", &oyraqami);

    int fasil;
    
    int ishora = 1;

    switch (oyraqami)
    {
        case 1:
            printf("Kiritlgan oy : Yanva\n");
            fasil = 4;
            break;
        case 2:
            printf("Kiritlgan oy : Fevral\n");
            fasil = 4;
            break;
        case 3:
            printf("Kiritlgan oy : Mart\n");
            fasil = 1;
            break;
        case 4:
            printf("Kiritlgan oy : Aprel\n");
            fasil = 1;
            break;
        case 5:
            printf("Kiritlgan oy : May\n");
            fasil = 1;
            break;
        case 6:
            printf("Kiritlgan oy : Iyul\n");
            fasil = 2;
            break;
        case 7:
            printf("Kiritlgan oy : Iyun\n");
            fasil = 2;
            break;
        case 8:
            printf("Kiritlgan oy : Avgust\n");
            fasil = 2;
            break;
        case 9:
            printf("Kiritlgan oy : Sentyabir\n");
            fasil = 3;
            break;
        case 10:
            printf("Kiritlgan oy : Oktyabir\n");
            fasil = 4;
            break;
        case 11:
            printf("Kiritlgan oy : Noyabir\n");
            fasil = 4;
            break;
        case 12:
            printf("Kiritlgan oy : Dekabir\n");
            fasil = 1;
            break;
        default:
            printf("Iltimos to'gri oy raqamini kiriting!!\n\a");
            ishora = 0;
        
    }
    
    if(fasil == 1) { printf("Oyning mavsumi esa Qish!\n"); }
    else if(fasil == 2) { printf("Oyning mavsumi esa Mart!\n"); }
    else if(fasil == 3) { printf("Oyning mavsumi esa Yoz!\n");  }
    else if(fasil == 4) { printf("Oyning mavsumi esa Qish!\n"); }

    return 0;
}