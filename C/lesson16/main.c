#include <stdio.h>
#include <stdlib.h>

//BAHOLASH TIZIMI

// 100 -> 80 -> 5
// 79  -> 60 -> 4
// 59  -> 40 -> 3
// 39  -> ... Yiqildingiz !!!

int main()
{
    int ball;
    printf("Ballni kiriting: ", ball);
    scanf("%d", &ball);
    
    if(ball >= 80 && ball <= 100) 
    {
        printf("\nSizning balingiz 5");
    }
    else if(ball >= 60) 
    {
        printf("\nSizning balingiz 4");
    }
    else if(ball >= 40) 
    {
        printf("\nSizning balingiz 3");
    }
    else 
    {
        printf("\nYiqildingiz !!!");
    }
}