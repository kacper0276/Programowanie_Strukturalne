#include <stdio.h>
#include <stdlib.h>

void dodaj_jeden(int *a, int *b) {
    *a = *a + 1;
    *b = *b + 1;
    printf("%d %d\n", *a, *b);
}

int main()
{
    // Wskaźniki tutorial - fast
    // int zmienna = 5;
    // int * wskaznikZmiennej = &zmienna;
    // printf("Wartosc zmiennej: %d\n", *wskaznikZmiennej);
    // printf("Miejsce pamieci : %p\n", wskaznikZmiennej);
    // zmienna = 10;
    // printf("Wartosc zmiennej: %d\n", *wskaznikZmiennej);
    // printf("Miejsce pamieci : %p\n", wskaznikZmiennej);
    // *wskaznikZmiennej = 8;
    // printf("Wartosc zmiennej: %d\n", zmienna);
    // & <= wskaźnik do pamięci
    // * <= wskaźnik do wartości
    // int * a; - błąd (2 od razu na egzaminie, musi się do czegość odwoływać)
    int a = 5, b = 7;
    printf("%d %d\n", a, b);
    dodaj_jeden(&a, &b); // <- dodajesz wskaznik do pamieci
    printf("%d %d\n", a, b);
   
   // static w c
//    void foo()
// {
//     int a = 10;
//     static int sa = 10;

//     a += 5;
//     sa += 5;

//     printf("a = %d, sa = %d\n", a, sa);
// }
//    int i;

//     for (i = 0; i < 10; ++i)
//         foo();
   
// a = 15, sa = 15
// a = 15, sa = 20
// a = 15, sa = 25
// a = 15, sa = 30
// a = 15, sa = 35
// a = 15, sa = 40
// a = 15, sa = 45
// a = 15, sa = 50
// a = 15, sa = 55
// a = 15, sa = 60

   

    // malloc(sizeof(int)*10) <= służy do deklarowania miejsca w pamięci (przykład to rozmiar dla 1 inta) (* 10 = alokuje miejsce dla 10 intow pod rząd, tworzy tablice dynamiczna)
    // Po wykonaniu ważne by użyć funkcji free(wsk) - by zwolnić pamięć
    int * wsk = malloc(sizeof(int) * 10);
    printf("%p\n", wsk);
    wsk[0] = 1;
    wsk[1] = 5;
   
    int cos = 10;
    int *wsk = &cos;
    printf("%p\n", wsk); // zwraca wskaźnik w pamięci
    printf("%d", *wsk); // zwraca wartość 10

   // Wskaźniki na funkcje
   int suma(int a, int b) {
    return a+b;
}
    
    int (*wsk_funkcja) (int a, int b) = suma;
    printf("suma: %d", wsk_funkcja(2,5));
   
   //Różnica
   int a = 5, b = 10, c = 15;

const int* foo;     // pointer to constant int.
foo = &a;           // assignment to where foo points to.

/* dummy statement*/
*foo = 6;           // the value of a can´t get changed through the pointer.

foo = &b;           // the pointer foo can be changed.



int *const bar = &c;  // constant pointer to int 
                      // note, you actually need to set the pointer 
                      // here because you can't change it later ;)

*bar = 16;            // the value of c can be changed through the pointer.    

/* dummy statement*/
bar = &a;             // not possible because bar is a constant pointer.


    return 0;
   
    int liczba =5;
    int* wsk =&liczba;
    printf("Adres zmiennej: %p\n", wsk ); // adres pamięci
    printf("Adres zmiennej przechowujacej wsk.: %p\n",&wsk ); // adres pamięci
    printf("Wyluskiwanie wskaznika: %d\n",*wsk); // 5
}
