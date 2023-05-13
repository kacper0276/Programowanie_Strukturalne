#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Zad 7.2.1
struct trojkat {
        int bokA;
        int bokB;
        int bokC;
};

void zad_7_2_1() {

    struct trojkat dlugosci = {5, 10, 15};

    printf("%d \n", fun_zad_7_2_1(dlugosci));
}

int fun_zad_7_2_1(struct trojkat t) {
    return t.bokA + t.bokB + t.bokC;
}

// Zad 7.2.2

void fun_zad_7_2_2(struct trojkat troj1, struct trojkat *troj2) {
    *troj2 = troj1;
}

void zad_7_2_2() {
    struct trojkat t1 = {10, 15, 20};
    struct trojkat t2;

    fun_zad_7_2_2(t1, &t2);

    printf("%d %d %d", t2.bokA,  t2.bokB, t2.bokC);
}

// Zad 7.2.3

struct punkt {
    double x;
    double y;
    double z;
};

double min(struct punkt tab[], int n) {
    double pom, min = sqrt(pow(tab[1].x - tab[0].x,2) + pow(tab[1].y - tab[0].y,2) + pow(tab[1].z - tab[0].z,2));

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            pom = sqrt(pow(tab[j].x - tab[i].x, 2) + pow(tab[j].y - tab[i].y, 2) + pow(tab[j].z - tab[i].z, 2));
            if(pom < min) {
                min = pom;
            }
        }
    }

    return min;
}

void zad_7_2_3() {
    struct punkt tab[] = {{1.5, 2.2, 3.3}, {1.5, 5.1, 10.1}};

    printf("%.2lf", min(tab, 2));
}

// Zad 7.2.4
void zad_7_2_4() {
    struct punkt tab1[] = {{1.1, 1.2, 1.3}, {1.5, 2.2, 3.3}, {1.5, 5.1, 10.1}};
    struct punkt tab2[3];

    fun_zad_7_2_4(tab1, tab2, 3);

    for(int i = 0; i < 3; i++) {
        printf("%lf %lf %lf \n", tab2[i].x, tab2[i].y, tab2[i].z);
    }
}

void fun_zad_7_2_4(struct punkt tab1[], struct punkt tab2[], int size) {
    for(int i = 0; i < size; i++) {
        tab2[i] = tab1[i];
    }
}

// Zad 7.2.5
struct punkt10 {
    int punkty[10];
};

void fun_zad_7_2_5(struct punkt10 tab1[], struct punkt10 tab2[], int size) {
    for(int i = 0; i < size; i++) {
        tab2[i] = tab1[i];
    }
}

void zad_7_2_5() {
    struct punkt10 tab1[] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}};
    struct punkt10 tab2[2];

    fun_zad_7_2_5(tab1, tab2, 2);

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tab2[i].punkty[j]);
        }
        printf("\n");
    }

}

// Zad 7.2.7
struct zespolone {
    double im, re;
};

struct zespolone dodaj(struct zespolone l1, struct zespolone l2) {
    struct zespolone wynik = {l1.im + l2.im, l1.re + l2.re};

    return wynik;
};

void zad_7_2_7() {
    struct zespolone l1 = {2.0, 5.5};
    struct zespolone l2 = {5.0, 1.5};

    struct zespolone wyn = dodaj(l1, l2);

    printf("%lf %lf", wyn.im, wyn.re);
}

// Zad 7.2.9
struct lista {
    int liczba;
    struct lista * wskaznik;
};


// Zad 7.2.10
union super_int {
    int a;
    unsigned int b;
};

// Zad 7.2.11
union Liczba {
	int calkowita;
	double wymierna;
};

struct Dane {
	int tp;
	union Liczba zaw;
};

struct Dane funkcja() {
	struct Dane r;
	printf("Jaka liczbe wczytujemy? \n");
	printf("0 <- liczba całkowita 1 <- liczba wymierna \n");
	scanf("%d", &r.tp);
	
	if(r.tp == 0) {
		scanf("%d", &r.zaw.calkowita);	
	} else if(r.tp == 1) {
		scanf("%lf", &r.zaw.wymierna);
	} else {
		printf("Zła liczba");
	}
	
	return r;
}

void zad_7_2_11() {
	funkcja();
}

// Zad 7.2.15
enum zwierzak {
	pies, kot, ryba, papuga
};


int main()
{
    // zad_7_2_1();
    // zad_7_2_2();
    zad_7_2_3();
    // zad_7_2_4();
    // zad_7_2_5();
    // zad_7_2_7();
	// zad_7_2_11();

    return 0;
}
