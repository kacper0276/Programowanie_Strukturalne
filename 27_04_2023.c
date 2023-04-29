#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

// Funkcje do zadan

// Zad 5.2.2
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

// Zad 5.2.6
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

// Zad 5.2.7
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

void sklejwchar_t(wchar_t *n1, wchar_t *n2, wchar_t *n3) {
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

// Zad 5.2.9   
void wytnij(char *napis, int n, int m) {
    int i = 0;
    int j = 0;
    int pom = 0;
    while(napis[i] != 0) {
        if(i == n) {
        	while(n + pom <= m) {
        		napis[n + pom] = napis[m + pom + 1];
        		pom++;
			}
				i = n + pom;
		}
		if(i > m) {
			napis[i] = napis[m + pom + 1];
			pom++;
		}
        i++;
        
    }
    napis[i] = 0;
}

void wytnijwchar(wchar_t *napis, int n, int m) {
    int i = 0;
    int j = 0;
    int pom = 0;
    while(napis[i] != 0) {
        if(i == n) {
        	while(n + pom <= m) {
        		napis[n + pom] = napis[m + pom + 1];
        		pom++;
			}
				i = n + pom;
		}
		if(i > m) {
			napis[i] = napis[m + pom + 1];
			pom++;
		}
        i++;
        
    }
    napis[i] = 0;
}

// Zad 5.2.11
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

void wytnijzwchar(wchar_t *n1, wchar_t *n2) {
    int i = 0, j = 0;
    wchar_t ile[256] = {};
    
    zliczWystapieniawchar(ile, n2);
    
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

void zliczWystapieniawchar(wchar_t *ile, wchar_t *napis) {
	int i = 0;
	
	while(napis[i] != 0) {
		ile[napis[i]]++;
		i++;
	}
}

// Zad 5.2.20
char * godzina(int h, int m, int s) {
	char *result = malloc(15 * sizeof(char)); // <- Dorzucamy jeden bit na znak końcowy
	sprintf(result, "H:%02d M:%02d S:%02d", h, m, s);
	return result;
}

wchar_t * godzina_wchar(int h, int m, int s) {
	wchar_t *result = malloc(9 * sizeof(wchar_t));
	swprintf(result, 9, L"%02d:%02d:%02d", h, m , s);
	return result;
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
    
    wchar_t wn1[] = L"Ala m";
    wchar_t wn2[] = L"a kota";
    wchar_t wn3[15] = L"";


    sklej(n1, n2, n3);
    int index = 0;
    while(n3[index] != 0) {
        printf("%c", n3[index]);
        index++;
    }
    sklejwchar_t(wn1, wn2, wn3);
    printf("%S", wn3);
}

void zad_5_2_9() {
    char n1[] = "testcos";
    wchar_t wn1[] = L"innynapis";

    wytnij(n1, 10, 15);
    wytnijwchar(wn1, 0, 5);

    printf("%s \n", n1);
    printf("%S", wn1);
}

void zad_5_2_11() {
	char n1[] = "abcdefg";
	char n2[] = "aaggbgggkldggmgn";
	wchar_t wn1[] = L"abcdefg";
	wchar_t wn2[] = L"aaggbgggkldggmgn";
	
	wytnijzw(n1, n2);
	wytnijzwchar(wn1, wn2);
	
	printf("%s \n", n1);
	printf("%S", wn1);
}

void zad_5_2_20() {
	
	printf("%s \n", godzina(8, 00, 00));
	
	printf("%S ", godzina_wchar(17, 19, 50));
}

int main()
{
    // zad_5_2_2();
    // zad_5_2_6();
    // zad_5_2_7();
	// zad_5_2_9();
	// zad_5_2_11();
	// zad_5_2_20();

    return 0;
}
