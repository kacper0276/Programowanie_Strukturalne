#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void zad(char *a) {
    // %s - string, %c - char
    printf("%s", a);
}

// Funkcje do zadañ
int dlugosc(char *napis) {
    int i = 0;
    while(napis[i] != 0) {
        i++;
    }

    return i;
}

int dlugosc_wchar(wchar_t *napis) {
    int i = 0;
    while(napis[i] != 0) {
        i++;
    }

    return i;
}

void kopiujn(char *napis1, char *napis2, int n) {
    int i = 0;
    while(napis1[i] != 0 && i < n) {
        napis2[i] = napis1[i];
        i++;
    }
    napis2[i] = 0;
}
void kopiujnwchar(wchar_t *napis1, wchar_t *napis2, int n) {
    int i = 0;
    while(napis1[i] != 0 && i < n) {
        napis2[i] = napis1[i];
        i++;
    }
    napis2[i] = 0;
}

void sklej(char *n1, char *n2, char *n3) {
    int index = 0,
    n3_index = 0;

    while(n1[index] != 0) {
        n3[n3_index] = n1[index];
        index++;
        n3_index++;
    }

    index = 0;
    while(n2[index] != 0) {
        n3[n3_index] = n2[index];
        index++;
        n3_index++;
    }
    n3[n3_index] = 0;

}

void wytnij(char *napis, int n, int m) { // Dokoñcz
    int i = 0;
    while(napis[i] != 0) {
        if(i >= n && i <= m) {
            napis[n + i] = napis[i + m + 1];
        }
        i++;
    }
    napis[i] = 0;
}

void wytnijzw(char *n1, char *n2) {
    int i = 0;
}

// Zadania
void zad_5_2_2() {
    char cos[] = "napis";
    wchar_t zdanie[] = L"napis";
    printf("%d \n", dlugosc(cos));
    printf("%d \n", dlugosc_wchar(zdanie));
}

void zad_5_2_6() {
    char n1[] = "cos";
    char n2[] = "napis";
    wchar_t z1[] = L"napis";
    wchar_t z2[] = L"napis";

    kopiujn(n1, n2, 2);
    kopiujnwchar(z1, z2, 4);

    int i = 0;
    while(n2[i] != 0) {
        printf("%c", n2[i]);
        i++;
    }

    printf("\n");

    int iwchar = 0;
    while(z2[iwchar] != 0) {
        printf("%c", z2[iwchar]);
        iwchar++;
    }

}

void zad_5_2_7() {
    char n1[] = "Ala m";
    char n2[] = "a kota";
    char n3[15] = "";

    sklej(n1, n2, n3);
    int index = 0;
    while(n3[index] != 0) {
        printf("%c", n3[index]);
        index++;
    }
}

void zad_5_2_9() {
    char n1[] = "napis";

    wytnij(n1, 1, 4);

    int index = 0;
    while(n1[index] != 0) {
        printf("%c", n1[index]);
        index++;
    }
}

void zad_5_2_11() {

}

int main()
{
    // zad_5_2_2();
    // zad_5_2_6();
    // zad_5_2_7();
    // zad_5_2_9();
    zad_5_2_11();

    return 0;
}
