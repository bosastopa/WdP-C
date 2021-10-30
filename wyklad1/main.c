#include <stdio.h>

int main() {

    double cale;
    double centy,przelicznik;
    przelicznik=2.54;

    printf("podaj ilosc cali \n ");
    scanf("%lf",&cale);

    centy=cale*przelicznik;

    printf("%lf cali to  %lf centymetrow", cale, centy);

    return 0;
}