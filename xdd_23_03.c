#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Przekazywane aka pomocnicze funkcje do zadañ
double fun_3_2_13(int a) {
    return a;
}

int fun_3_2_14_1(int n) {
    return n;
}

int fun_3_2_14_2(int n) {
    return n;
}

int fun_3_1(int n) {
    return n+5;
}

int fun_3_2(int n) {
    return n+10;
}

// G³ówne funkcje do zadañ

double fun_zad_3_2_13(double (*fun_pom)(int argument), int x) {
    return fun_pom(x);
}

bool fun_zad_3_2_14(int (*fun_1)(int arg), int (*fun_2) (int arg), unsigned int x) {
    for(int i = 0; i <= x; i++) {
        if(fun_1(i) != fun_2(i)) {
            return false;
        }
    }
    return true;
}

int sum_zad_3(int (*fun_1)(int a), int (*fun_2)(int a), int n ) {
    return fun_1(n) + fun_2(n);
}

unsigned int rek_zad_4(unsigned int n) {

    if(n == 1 || n == 0) {
        return 1;
    }

    switch(n%3) {
        case 0: return n;
        case 1: return n - 1;
        case 2: return 3*n+1 - 1;
    }


}

int foo(const int *wsk1, int * const wsk2) {
    return *wsk1 - *wsk2;
}

// Zadania
void zad_3_2_13() {
    printf("%lf", fun_zad_3_2_13(&fun_3_2_13,6));
}

void zad_3_2_14() {
    printf("%d", fun_zad_3_2_14(&fun_3_2_14_1, &fun_3_2_14_2, 10));
}

void zad_3() {
    printf("%d", sum_zad_3(&fun_3_1, &fun_3_2, 5));
}

void zad_4() {
    printf("%d", rek_zad_4(10));
}

void zad_5() {
    const int a = 15;
    int b = 10;

    printf("%d", foo(&a, &b));
}

int main()
{
    // zad_3_2_13();
    // zad_3_2_14();
    // zad_3();
     zad_4();
    // zad_5();

    return 0;
}
