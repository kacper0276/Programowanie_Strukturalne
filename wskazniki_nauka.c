#include <stdio.h>
#include <stdlib.h>

void dodaj_jeden(int *a, int *b) {
    *a = *a + 1;
    *b = *b + 1;
    printf("%d %d\n", *a, *b);
}

int main()
{
    // Wskaüniki tutorial - fast
    // int zmienna = 5;
    // int * wskaznikZmiennej = &zmienna;
    // printf("Wartosc zmiennej: %d\n", *wskaznikZmiennej);
    // printf("Miejsce pamieci : %p\n", wskaznikZmiennej);
    // zmienna = 10;
    // printf("Wartosc zmiennej: %d\n", *wskaznikZmiennej);
    // printf("Miejsce pamieci : %p\n", wskaznikZmiennej);
    // *wskaznikZmiennej = 8;
    // printf("Wartosc zmiennej: %d\n", zmienna);
    // & <= wskaünik do pamiÍci
    // * <= wskaünik do wartoúci
    // int * a; - b≥πd (2 od razu na egzaminie, musi siÍ do czegoúÊ odwo≥ywaÊ)
    int a = 5, b = 7;
    printf("%d %d\n", a, b);
    dodaj_jeden(&a, &b); // <- dodajesz wskaznik do pamieci
    printf("%d %d\n", a, b);

    // malloc(sizeof(int)*10) <= s≥uøy do deklarowania miejsca w pamiÍci (przyk≥ad to rozmiar dla 1 inta) (* 10 = alokuje miejsce dla 10 intow pod rzπd, tworzy tablice dynamiczna)
    // Po wykonaniu waøne by uøyÊ funkcji free(wsk) - by zwolniÊ pamiÍÊ
    int * wsk = malloc(sizeof(int) * 10);
    printf("%p\n", wsk);
    wsk[0] = 1;
    wsk[1] = 5;

    return 0;
}
