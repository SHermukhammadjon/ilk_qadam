#include <stdio.h>

int main()
{
    // input -> son1, son2, son3
    // output -> yig'indi, ko'paytmasi, o'rtalamasi, katta va kichknasini topish

    double son1, son2, son3, katta, kichkina, yigndi, kupaytma, urtalama;

    printf("Iltimos sonlarni ketmaketlikda kiritng:\n>");
    scanf("%lf %lf %lf", &son1, &son2, &son3);

    yigndi = son1 + son2 + son3;
    kupaytma = son1 * son2 * son3;
    urtalama = yigndi / 3;

    //Kichkina sonni topish
    kichkina = son1;
    if(son2 < kichkina)
    {
        kichkina = son2;
    }
    if(son3 < kichkina)
    {
        kichkina = son3;
    }

    //Katt sonni topish;
    katta = son1;
    if(son2 > katta)
    {
        katta = son2;
    }
    if(son3 > katta)
    {
        katta = son3;
    }

    printf("\n%.2lf, %.2lf, %.2lf sonlarining", son1, son2, son3);
    printf("\nYig'indsi: %.2lf", yigndi);
    printf("\nKupaytmasi: %.2lf", kupaytma);
    printf("\nO'rtalamasi %.2lf", urtalama);
    printf("\nKattasi : %.2lf", katta);
    printf("\nKichkinasi %.2lf", kichkina);

    return 0;
}