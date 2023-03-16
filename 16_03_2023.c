#include <stdio.h>
#include <stdlib.h>

// Funkcje do zadañ

int fun_zad_3_2_1(int *a, int *b) {
    return (*a < *b) ? *a : *b;
}

int * fun_zad_3_2_2 (int *a, int *b) {
    if(*a < *b) {
        return a;
    } else {
        return b;
    }
}

int fun_zad_3_2_5(int *a, int *b) {
    return *a + *b;
}

void fun_zad_3_2_6(int n, int *w) {
    *w = n;
}

int * fun_zad_3_2_9() {
    return malloc(sizeof(int));
}

int * fun_zad_3_2_11(unsigned int n) {
    int *a = malloc(sizeof(int) * n);

    return a;
}

double * fun_zad_3_2_12(double n) {
    return malloc(sizeof(double) * n);
}

void fun_zad_3_2_15(const int * stala, int *zmienna) {
    *zmienna = *stala;
}

// Lista zadañ
void zad_3_2_1() {
    int a = 11, b = 10;

    printf("%d\n", fun_zad_3_2_1(&a, &b));
}

void zad_3_2_2() {
    int a = 15, b = 20;

    printf("%p", fun_zad_3_2_2(&a, &b) );
}

void zad_3_2_5() {
    int a = 40, b = 10;

    printf("%d", fun_zad_3_2_5(&a, &b));
}

void zad_3_2_6() {
    int n = 10, w;

    fun_zad_3_2_6(n, &w);
    printf("%d", w);
}

void zad_3_2_9() {
    printf("%p\n", fun_zad_3_2_9());
}

void zad_3_2_11() {
    int n = 15;
    printf("%p\n", fun_zad_3_2_11(n));
}

void zad_3_2_12() {
    double n = 4;
    printf("%p\n", fun_zad_3_2_12(n));
}

void zad_3_2_15() {
    const int stala = 4;
    int zmienna;
    fun_zad_3_2_15(&stala, &zmienna);
    printf("%d\n", zmienna);
}

int main()
{
    // zad_3_2_1();
    // zad_3_2_2();
    // zad_3_2_5();
    // zad_3_2_6();
    // zad_3_2_9();
    // zad_3_2_11();
    // zad_3_2_12();
    // zad_3_2_15();

    return 0;
}
