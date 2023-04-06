#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

// Pomocnicze funkcje
int sortArray(int *tab) {
    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(tab[i] >= tab[j]) {
                continue;
            } else {
                int pom  = tab[i];
                tab[i] = tab[j];
                tab[j] = pom;
            }
        }
    }
}

int abs(int n) {
    if(n >= 0) {
        return n;
    } else {
        return -n;
    }
}

// Funkcje do zadan
double fun_zad_4_2_2a(int *tab, int rozmiar) {
    double suma = 0;
    for(int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }

    return suma / rozmiar;
}

int fun_zad_4_2_2b(int *tab, int rozmiar) {
    int suma = 0;
    for(int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }
    return suma;
}

int fun_zad_4_2_2c(int *tab, int rozmiar) {
    int suma = 0;
    for(int i = 0; i < rozmiar; i++) {
        suma += tab[i]*tab[i];
    }

    return suma;
}

double fun_zad_4_2_3(const int *tab, int rozmiar) {
    double suma = 0;
    for(int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }

    return suma / rozmiar;
}

void fun_zad_4_2_6a(int n, int *tab1, int *tab2) {
    for(int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }
}

void fun_zad_4_2_6b(int n, int *tab1, int *tab2) {
    int counter = n - 1;
    for(int i = 0; i < n; i++) {
        tab2[counter] = tab1[i];
        counter--;
    }
}

void fun_zad_4_2_9(int n, int *tab1, int *tab2, int *tab3) {
    for(int i = 0; i < n; i++){
        int val1 = tab1[i], val2 = tab2[i], val3 = tab3[i];
        int valueArray[3] = {val1, val2, val3};
        sortArray(valueArray);
        tab1[i] = valueArray[0];
        tab2[i] = valueArray[1];
        tab3[i] = valueArray[2];
    }
}

int fun_zad_4_2_10a(int n, int *tab){
    int max = 0;
    for(int i = 0; i < n; i++) {
        if(tab[i] > max) {
            max = tab[i];
        }
    }

    return max;
}

int fun_zad_4_2_10b(int n, int *tab) {
    int min = 100000;
    for(int i = 0; i < n; i++) {
        if(tab[i] < min) {
            min = tab[i];
        }
    }

    return min;
}

int fun_zad_4_2_10c(int n, int *tab) {
    int index = 0;

    for(int i = 0; i < n; i++) {
        if(tab[i] > tab[index]) {
           // ważne, trzymanie min czy max value to ujemne punkty na kolokwium
            index = i;
        }
    }

    return index;
}

int fun_zad_4_2_10d(int n, int *tab) {
    int index = 0;

    for(int i = 0; i < n; i++) {
        if(tab[i] < tab[index]) {
            // ważne, trzymanie min czy max value to ujemne punkty na kolokwium
            index = i;
        }
    }

    return index;
}

int fun_zad_4_2_10e(int n, int *tab) {
    int max = 0;
    for(int i = 0; i < n; i++) {
        if(abs(tab[i]) > max) {
            max = abs(tab[i]);
        }
    }

    return max;
}

int fun_zad_4_2_10f(int n, int *tab) {
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(abs(tab[i]) > abs(tab[index])) {
            index = i;
        }
    }

    return index;
}

void fun_zad_4_2_12a(int n, int *tab) {

    for(int i = 0; i<n/2; i++){
        int help = tab[i];
        tab[i] = tab[n-i-1];
        tab[n-i-1] = help;
    }
}

void fun_zad_4_2_12b(int n, int *tab) {
    int pom = tab[0];
    for(int i = 0; i < n; i++) {
        tab[i] = tab[i + 1];
    }
    tab[n - 1] = pom;
}

void fun_zad_4_2_12c(int n, int *tab) {
    int pom = tab[n-1];
    for(int i = n; i >= 0; i--) {
        tab[i] = tab[i - 1];
    }

    tab[0] = pom;

}

void fun_zad_4_2_12d(int n, int *tab) {
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(tab[i] >= tab[j]) {
				int pom = tab[i];
				tab[i] = tab[j];
				tab[j] = pom;
			}
		}
	}
}

void fun_zad_4_2_12e(int n, int *tab) {
	for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(tab[i] >= tab[j]) {
                continue;
            } else {
                int pom  = tab[i];
                tab[i] = tab[j];
                tab[j] = pom;
            }
        }
    }
}

// Zadania

void zad_4_2_2() {
    int tablica[SIZE] = {4, 2, 2, 3, 5};
    // Podpunkt a
    printf("%lf \n", fun_zad_4_2_2a(tablica, SIZE));

    // Podpunkt b
    printf("%d \n", fun_zad_4_2_2b(tablica, SIZE));

    // Podpunkt c
    printf("%d \n", fun_zad_4_2_2c(tablica, SIZE));

}

void zad_4_2_3() {
    const int tablica[SIZE] = {10, 20, 30, 40, 50};

    printf("%lf \n", fun_zad_4_2_3(tablica, SIZE));
}

void zad_4_2_6() {
    // Podpunkt a
    int tab1[SIZE] = {1, 2, 3, 4, 5};
    int tab2[SIZE] = {6, 7, 8, 9, 10};

    fun_zad_4_2_6a(SIZE, tab1, tab2);

    for(int i = 0; i < SIZE; i++) {
        printf("%d ", tab2[i]);
    }
    printf("\n");

    // Podpunkt b
    fun_zad_4_2_6b(SIZE, tab1, tab2);

    for(int i = 0; i < SIZE; i++) {
        printf("%d ", tab2[i]);
    }

}

void zad_4_2_9() {
    int tablica1[SIZE] = {5, 2, 0, 10, 5};
    int tablica2[SIZE] = {1, 5, 10, 8, 10};
    int tablica3[SIZE] = {8, 4, 11, 15, 1};

    fun_zad_4_2_9(SIZE, tablica1, tablica2, tablica3);

    for(int i = 0; i < SIZE; i++) {
        printf("%d %d %d \n", tablica1[i], tablica2[i], tablica3[i]);
    }

}

void zad_4_2_10() {
    int tablica[SIZE] = {1, -15, 68, 12, -100};

    // Podpunkt a
    printf("%d \n", fun_zad_4_2_10a(SIZE, tablica));

    // Podpunkt b
    printf("%d \n", fun_zad_4_2_10b(SIZE, tablica));

    // Podpunkt c
    printf("%d \n", fun_zad_4_2_10c(SIZE, tablica));

    // Podpunkt d
    printf("%d \n", fun_zad_4_2_10d(SIZE, tablica));

    // Podpunkt e
    printf("%d \n", fun_zad_4_2_10e(SIZE, tablica));

    // Podpunkt f
    printf("%d \n", fun_zad_4_2_10f(SIZE, tablica));
}

void zad_4_2_12() {
    int tablica[SIZE] = {8, 15, 16, 10, 4};

    // Podpunkt a
    fun_zad_4_2_12a(SIZE, tablica);
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", tablica[i]);
    }

    printf(" \n");
    // Podpunkt b
    fun_zad_4_2_12b(SIZE, tablica);
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", tablica[i]);
    }

    printf(" \n");
    // Podpunkt c
    fun_zad_4_2_12c(SIZE, tablica);
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", tablica[i]);
    }
    
    printf(" \n");
    
    // Podpunkt d
    fun_zad_4_2_12d(SIZE, tablica);
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", tablica[i]);
    }
    
    printf("\n");
    
    // Podpunkt e
    fun_zad_4_2_12e(SIZE, tablica);
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", tablica[i]);
    }
    
}


int main()
{
    // zad_4_2_2();
    // ad_4_2_3();
    // zad_4_2_6();
    // zad_4_2_9();
    // zad_4_2_10();
    // zad_4_2_12();

    return 0;
}
