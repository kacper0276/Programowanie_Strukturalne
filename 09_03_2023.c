#include <stdio.h>
#include <stdlib.h>

// Zmienna liczaca wywolania funkcji
int zliczam = 0;

// Zmienna liczaca sume zad_2_2_19
int sumowanie = 0;

// Funckja zad_2_2_1
int abs(int n) {
    if(n >= 0) {
        return n;
    } else {
        return -n;
    }
}

// Funkcja zad_2_2_3
int szukanieLiczbyZad_2_2_3(int n) {
    int k = n-1;

    while(k--) {
        if(n % k == 0) {
            return k;
        }
    }

}

// Funkcja zad_2_2_7
int pow(int n, int m) {
    int wynik = 1;

    if(n == 0) {
        return 0;
    }

    if(m == 0) {
        return 1;
    }

    for(int i = 0; i < m; i++) {
        wynik *= n;
    }

    return wynik;
}

// Funkcja zad_2_2_11
int sqrt(int n) {
    int i = 1;

    while(i * i <= n) {
        i++;
    }

    return i-1;
}

// Funkcja zad_2_2_11
int suma(int n) {
    int suma = 0;

    for(int i = 0; i <= n; i++) {
        suma += sqrt(i);
    }

    return suma;
}

// Funkcja zad_2_2_17
void zliczanieWywolan() {
    printf("%d \n", ++zliczam);
}

// Funkcja zad_2_2_19
int sumowanieLiczb(int n) {

    return n;
}

// Funkcja zad_2_2_23
int fibonacci(int n) {
    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Pomylily mi sie zadania wiec zad_2_2_27 tez zrobilem
int rekurencja_zad_2_2_27(int n, int m) {
    if(m == 0) {
        return n;
    }

    if(n == 0) {
        return m;
    }

    return rekurencja_zad_2_2_27(n - 1,m) + rekurencja_zad_2_2_27(n, m - 1) + rekurencja_zad_2_2_27(n - 1, m - 1);
}

int rekurencja_zad_2_2_28(int n, int m) {
    if(m == 0) {
        return  n;
    }
    if ( n >= m && m > 0) {
        return m - n + rekurencja_zad_2_2_28(m - 1, n) + rekurencja_zad_2_2_28(m, n - 1);
    }

    return rekurencja_zad_2_2_28(m,n);

}

// Zadania
void zad_2_2_1() {
    int n;
    printf("Podaj liczbe n: \n");
    scanf("%d", &n);

    printf("%d", abs(n));
}

void zad_2_2_3() {
    int n;
    printf("Podaj liczbe n > 2 \n");
    scanf("%d", &n);

    if(n < 2) {
        printf("Bledna liczba");
    } else {
        printf("%d", szukanieLiczbyZad_2_2_3(n));
    }
}

void zad_2_2_7() {
    int n, m;

    printf("Podaj liczby m i n \n");
    scanf("%d %d", &n, &m);

    if(n == 0 && m == 0) {
        printf("Przynajmniej jedna liczba musi byc rozna od 0");
    } else {
        printf("%d", pow(n,m));
    }
}

void zad_2_2_11() {
    int n;
    printf("Podaj liczbe calkowita n: \n");
    scanf("%d", &n);

    if(n < 0) {
        printf("Nie poprawna liczba");
    } else {
        printf("%d", suma(n));
    }
}

void zad_2_2_17() {
    zliczanieWywolan();

    zliczanieWywolan();

    zliczanieWywolan();

    zliczanieWywolan();

}

void zad_2_2_19() {
    int n;

    for(;;) {
        printf("Podaj liczbe: \n");
        scanf("%d", &n);

        printf("Wartosc liczby zwroona %d \n", sumowanieLiczb(n));
        printf("Suma liczb %d \n", sumowanie += sumowanieLiczb(n));
    }

}

void zad_2_2_23() {
    int n;
    printf("Podaj liczbe n \n");
    scanf("%d", &n);

    if(n < 0) {
        printf("Zla liczba");
    } else {
        printf("%d", fibonacci(n));
    }
}

void zad_2_2_27() {
    int n, m;
    printf("Podaj liczbe n, a nastepnie m: \n");
    scanf("%d %d", &n, &m);

    if(n < 0 && m < 0) {
        printf("Nie poprawne liczby \n");
    } else {
        printf("%d", rekurencja_zad_2_2_27(n,m));
    }
}

void zad_2_2_28() {
    int n, m;
    printf("Podaj liczbe n, a nastepnie m: \n");
    scanf("%d %d", &n, &m);

    if(n < 0 && m < 0) {
        printf("Nie poprawne liczby \n");
    } else {
        printf("%d", rekurencja_zad_2_2_28(n,m));
    }
}

int main()
{
    // zad_2_2_1();

    // zad_2_2_3();

    // zad_2_2_7();

    // zad_2_2_11();

    // zad_2_2_17();

    // zad_2_2_19();

    // zad_2_2_23();

    // zad_2_2_27();

    // zad_2_2_28();

    return 0;
}
