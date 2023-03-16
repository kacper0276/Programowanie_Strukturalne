#include <stdio.h>
#include <stdlib.h>

void dodaj_jeden(int *a, int *b) {
    *a = *a + 1;
    *b = *b + 1;
    printf("%d %d\n", *a, *b);
}

int main()
{
    // Wska�niki tutorial - fast
    // int zmienna = 5;
    // int * wskaznikZmiennej = &zmienna;
    // printf("Wartosc zmiennej: %d\n", *wskaznikZmiennej);
    // printf("Miejsce pamieci : %p\n", wskaznikZmiennej);
    // zmienna = 10;
    // printf("Wartosc zmiennej: %d\n", *wskaznikZmiennej);
    // printf("Miejsce pamieci : %p\n", wskaznikZmiennej);
    // *wskaznikZmiennej = 8;
    // printf("Wartosc zmiennej: %d\n", zmienna);
    // & <= wska�nik do pami�ci
    // * <= wska�nik do warto�ci
    // int * a; - b��d (2 od razu na egzaminie, musi si� do czego�� odwo�ywa�)
    int a = 5, b = 7;
    printf("%d %d\n", a, b);
    dodaj_jeden(&a, &b); // <- dodajesz wskaznik do pamieci
    printf("%d %d\n", a, b);

    // malloc(sizeof(int)*10) <= s�u�y do deklarowania miejsca w pami�ci (przyk�ad to rozmiar dla 1 inta) (* 10 = alokuje miejsce dla 10 intow pod rz�d, tworzy tablice dynamiczna)
    // Po wykonaniu wa�ne by u�y� funkcji free(wsk) - by zwolni� pami��
    int * wsk = malloc(sizeof(int) * 10);
    printf("%p\n", wsk);
    wsk[0] = 1;
    wsk[1] = 5;

    return 0;
}
