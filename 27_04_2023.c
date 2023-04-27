#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void zad(char *a) {
    // %s - string, %c - char
    printf("%s", a);
}

// Funkcje do zadan
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

void wytnij(char *napis, int n, int m) { // Dokoncz
    int i = 0;
    int j = 0;
    while(napis[i] != 0) {
        if(i == n) {
        	int pom = 0;
        	while(n + pom <= m) {
        		napis[n + pom] = napis[m + pom + 1];
        		pom++;
			}
				i = m;
//				if(napis[m + pom + 1] == napis[0]) {
//					napis[i + 1] = 0;
//				}
		}
        i++;
    }
    napis[i] = 0;
}

void wytnijzw(char *n1, char *n2) {
    int i = 0, j = 0;
    char ile[256] = {};
    
    zliczWystapienia(ile, n2);
    
//    for(int i = 0; i < 255; i++) {
//    	if(ile[i] != 0) {
//    		printf("%c: %d ", i, ile[i]);
//		}
//	}
    
    while(n1[i] != 0) {
    	if(ile[n1[i]] == 0) {
    		if(j < i) {
    			n1[j] = n1[i];
			}
			j++;
		}
		i++;
		n1[j] = 0;
	}
    
}

void zliczWystapienia(char *ile, char *napis) {
	int i = 0;
	
	while(napis[i] != 0) {
		ile[napis[i]]++;
		i++;
	}
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

    printf("%s \n", n2);
    
    printf("%s", z2);

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
    char n1[] = "testcos";

    wytnij(n1, 0, 3);

    printf("%s", n1);
}

void zad_5_2_11() {
	char n1[] = "abcdefg";
	char n2[] = "aaggbgggkldggmgn";
	
	wytnijzw(n1, n2);
	
	printf("%s", n1);
}

void zad_5_2_20() {
	
}

int main()
{
    // zad_5_2_2();
    // zad_5_2_6();
    // zad_5_2_7();
	zad_5_2_9(); // Dopisz dla wchar_t
	// zad_5_2_11(); Dopisz dla wchar_t
	// zad_5_2_20();

    return 0;
}
