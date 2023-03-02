#include <stdio.h>
#include <stdlib.h>

// Funckje

int abs(int n) {
    if(n >= 0) {
        return n;
    } else {
        return -n;
    }
}

int NWD(int n, int m) {
    int pom;

    while(m!=0) {
        pom = m;
        m = n%m;
        n = pom;
    }

    return n;
}

// Zadania

void zad_1_3_1() {
    int n;

    scanf("%d", &n);

    printf("%d", abs(n));

}

void zad_1_3_2() {
    int a, b;

    scanf("%d %d", &a, &b);

    if(a >= b) {
        printf("%d", a);
    } else if(a < b) {
        printf("%d", b);
    }
}

void zad_1_3_9() {
    double a, b;
    char type;
    printf("Podaj 2 liczby \n");
    scanf("%lf %lf", &a, &b);

    printf("Podaj co chcesz zrobic + - / * \n");
    scanf(" %c", &type);

    switch (type){
    case '+':
        printf("%.2lf", a+b);
    case '-':
        printf("%.2lf", a-b);
    case '/':
        printf("%.2lf", a/b);
    case '*':
        printf("%.2lf", a*b);
    }

}

void zad_1_3_4() {
    int a, b;

    scanf("%d %d", &a, &b);

    if(abs(a) >= abs(b)) {
        printf("%d", a);
    } else if(abs(a) < abs(b)) {
        printf("%d", b);
    }
}

void zad_1_3_8() {
    int a, b;
    char type;

    printf("Podaj rodzaj figury \n-t trojkat \n-k kwadrat \n-p prostokat \n");
    scanf(" %c", &type);

    switch(type) {
    case 't':
        printf("Podaj dlugosc podstawy, a nastepnie wysokosc ");
        scanf("%d %d", &a, &b);
        printf("%lf", (a *b)/2);
        break;

    case 'k':
        printf("Podaj dlugosc boku ");
        scanf("%d", &a);
        printf("%d", (a*a));
        break;

    case 'p':
        printf("Podaj dlugosc boku pierwszego i drugiego ");
        scanf("%d %d", &a, &b);
        printf("%d", (a*b));
        break;

    default:
        printf("Nie ma takiej figury");
    }

}



// zad 1.4
void zad_1_4_13() {
    int n, suma = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
            int pomoc = 1;
        for(int j = 1; j<= i; j++) {
            pomoc *=j;
        }
    suma += pomoc;
    }

    printf("%d", suma);
}

void zad_1_4_1() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = n; i < m; i+=n) {
        printf("%d ", i);
    }
}

void zad_1_4_2() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= m; i++) {
        printf("%d ", n*i);
    }
}

void zad_1_4_9() {
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d", NWD(n,m));
}

void zad_1_4_7() {
    int n, m, suma = 1;
    scanf("%d %d", &n, &m);

    for(int i = n; i <= m; i++){
        suma *= i;
    }

    printf("%d", suma);
}

int main()
{
    // zad_1_3_1();

    // zad_1_3_2();

    // zad_1_3_4();

    // zad_1_3_8();

    // zad_1_3_9();

    // zad_1_4_1();

    // zad_1_4_2();

    // zad_1_4_7();

    // zad_1_4_9();

    // zad_1_4_13();

    return 0;
}
