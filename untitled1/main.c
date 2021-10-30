#include <stdio.h>


void rw(){
    printf("Rano wstan!\n");
}

void pj(int a){
    for (int i = 0; i < a; ++i) {

        printf("Panie janie!\n");
    }
    rw();
}



int main() {
    /* zad 1*/
    printf("Stanislaw Zadroga\n");
    printf("stanislaw\nzadroga\n");
    printf("Stanislaw");
    printf("Zadroga\n");
    /* zad 2*/
    printf("Stanislaw Zadroga\n");
    printf("Olsztyn ul.Kołobrzeska 13i/77 10-445 Olsztyn\n");
    /* zad 3*/
    int wiek  = 22;
    printf("Twoj wiek to: %d dni\n",wiek*365);
    /* zad 4*/
    pj(2);

    return 0;
}
