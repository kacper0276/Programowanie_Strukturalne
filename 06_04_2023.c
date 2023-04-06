#include <stdio.h>
#include <stdlib.h>

// Funkcje do zadañ

double * fun_zad_4_2_14(int n) {
    return malloc(n * sizeof(double));
}

void fun_zad_4_2_16(double *arr) {
    free(arr);
}

double * fun_zad_4_2_17(int n, double *arr) {
    double *copy = malloc(n * sizeof(double));
    for(int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }

    return copy;
}

int * fun_zad_4_2_19(int n, int *tab1) {
    int ile = 0;
    for(int i = 0; i < n; i++) {
        if(tab1[i] != 0)
            ile++;
    }

    int *tab2 = malloc(ile * sizeof(int));
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(tab1[i] != 0) {
            tab2[index] = tab1[i];
            index++;
        }
    }

    return tab2;
}

// Zadania

void zad_4_2_14() {
    int n = 5;
    printf("%p \n", fun_zad_4_2_14(n));
}

void zad_4_2_16() {
    fun_zad_4_2_16(fun_zad_4_2_14(5));
}

void zad_4_2_17() {
    int n = 3;
    double array[3] = {3.1, 2, 4};
    printf("%p ", fun_zad_4_2_17(n, array)); // <- wskaŸnik

    double *ar;

    ar=fun_zad_4_2_17(n, array);

    printf("%p \n", ar);

    for(int i = 0; i < 3; i++) {
        printf("%lf ", *(ar + i)); // *(ar + 0) <- pierwszy element tablicy, +1 <- drugi element tablicy
     }

}

void zad_4_2_19() {
    int n = 6;
    int tab[6] = {1, 0, 6, 0, 0, 7};
    int *arr = fun_zad_4_2_19(n, tab);
    printf("%p \n", arr);
    for(int i = 0; i < 3; i++) {
        printf("%d ", arr[i]); // Lub tak *(arr + i)
    }
}

int main()
{
    // zad_4_2_14();
    // zad_4_2_16();
    // zad_4_2_17();
    // zad_4_2_19();



    return 0;
}
