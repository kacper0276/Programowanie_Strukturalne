#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zad_1_2_2() {
    // printf("Bardzo\ndlugi\nnapis\n");
    // Lub
    //printf("Bardzo \n");
    //printf("Dlugi \n");
    //printf("Napis \n");
    // Lub
    printf("Bardzo \n"
           "Dlugi \n"
           "Wyraz \n");
}

void zad_1_2_3() {
    printf("Napis zawierajacy dziwne znaczki: // \\ \\ $ & %% \n");
    // % i \ to znaki specjalne
}

void zad_1_2_4() {
    int nazwa;

    // %d - oznacza liczbê ca³kowit¹
    scanf("%d", &nazwa);

    printf("%d", nazwa);

    printf("\n");
}

void zad_1_2_5() {
    double liczba;

    // %lf - oznacza double, %f - oznacza float
    scanf("%lf", &liczba);

    printf("%lf", liczba);

    printf("\n");

}

void zad_1_2_6() {
    int liczba1, liczba2, liczba3;

//    scanf("%d", &liczba1);
//    scanf("%d", &liczba2);
//    scanf("%d", &liczba3);

      // LUB

      scanf("%d %d %d", &liczba1, &liczba2, &liczba3);

      printf("%d\n%d\n%d", liczba1, liczba2, liczba3);

      // Lub

      printf("%d i %d oraz %d", liczba1, liczba2, liczba3);
      // Wypisze np. 1 i 15 oraz 10
}

void zad_1_2_7() {
    int liczba;

    scanf("%d", &liczba);

    // Lub
    // liczba = liczba+1;

    printf("%d \n", liczba+1);


    printf("%d", liczba); // Nie zmienia wartoœci liczby
}

void zad_1_2_8() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    double srednia = (a + b + c) / 3.0f;
    // Inaczej bêdzie wynik w int a nie w double, jak bêdzie samo 3, a nie 3.0f

    printf("%lf\n", srednia);
}

void zad_1_2_9() {
    // unsigned int - nie dzia³a w c
    double a;

    scanf("%lf", &a);

    if(a < 0) {
        printf("Liczba musi byc dodatnia \n");
    } else {
      printf("%lf", sqrt(a));
    }

}

void zad_1_2_10() {
    double a;

    scanf("%lf", &a);

    double bezwzgledna = fabs(a);
    // abs - dzia³a na int
    // fabs - dzia³a na double

    printf("%lf", bezwzgledna);
}

void zad_1_2_11() {
    double a;

    scanf("%lf", &a);

    printf("%.2lf", a);
    // printf("%.2lf", a) - 2 miejsca po przecinku, printf("%.5lf", a) - 5 miejsc po przecinku
}

void zad_1_2_12() {
    int a;

    scanf("%d", &a);

    printf("%e", a);

    // %e - notacja naukowa
    // %c - znaki ASCII wyrzuci
    // notacji wyk³adniczej - notacja naukowa  0.2 to 2.0e-1
}


int main()
{
    printf("Hello world!\n");

    // zad_1_2_2();

    // zad_1_2_3();

    // zad_1_2_4();

    // zad_1_2_5();

    // zad_1_2_6();

    // zad_1_2_8();

    // zad_1_2_9();

    // zad_1_2_10();

    // zad_1_2_11();

     zad_1_2_12();

    return 0;
}
