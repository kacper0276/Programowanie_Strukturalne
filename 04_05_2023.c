#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Zad 6.2.1
int **zad_6_2_1(int n, int m) {
	int **tab = malloc(n * sizeof(int *));
	
	for (int i = 0; i < n; i++) {
		tab[i] = malloc(m * sizeof(int));
	}
	
	return tab;
}	

// Zad 6.2.5
int *** zad_6_2_5_a(int n, int m, int l) {
	int ***tab = malloc(n * sizeof(int **));
	for(int i = 0; i < n; i++) {
		tab[i] = malloc(m * sizeof(int *));
		for(int j = 0; j < m; j++) {
			tab[i][j] = malloc(l * sizeof(int));
		}
	}
	
	return tab;
}

void zad_6_2_5_b(int *** tab, int n, int m) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			free(tab[i][j]);
		}
		free(tab[i]);
	}
	free(tab);
}

// Zad 6.2.7 (Nad przek¹tn¹)
int ** zad_6_2_7(int n) {
	int **tab = malloc(n * sizeof(int *));
	
	for(int i = 0; i < n; i++) {
		// n = 3
		
		tab[i] = malloc((n - i) * sizeof(int));
		// tab[0] = 3 * int
		// tab[1] = 2 * int
		// tab[2] = 1 * int
	} 
	
	// Pod przek¹tn¹
//	for(int i = 0; i < n; i++) {
//		tab[i] = malloc((i + 1) * sizeof(int));
//	}
	
	return tab;
}

// Zad 6.2.11
int fun_zad_6_2_11(int n, int tab[][100]) {
	int suma = 0;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 100; j++) {
			suma += tab[i][j];
		}
	}
	
	return suma;
}

// Zad 6.2.14
int zad_6_2_14(int tab[][100][100]) {
	int suma = 0;
	
	for(int i = 0; i < 100; i++) {
		for(int j = 0; j < 100; j++) {
			for(int k = 0; k < 100; k++) {
				suma += tab[i][j][k];
			}
		}
	}
	
	return suma;
}

// Zad 6.2.17
double zad_6_2_17 (int n, int m, int tab[][m]) {
	int suma = 0;
	double wyn = 0;
	
	for(int i = 0; i < n; i++) {
		suma = 0;
		for(int j = 0; j < m; j++) {
			suma += tab[i][j];
		}
		if( (double)suma/m > wyn || i == 0) { // Poniewa¿ mo¿emy operowaæ na liczbach ujemynych wtedy domyœlna wartoœæ 0 bêdzie najwiêksza co da nam b³êdny wynik
			wyn = (double)suma/m; 
		}
	}
	
	return wyn;
}

// Zad 6.2.22
void zad_6_2_22(int n, int m, int tab[][m]) {
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m/2; j++) {
			int tmp = tab[i][j];
                tab[i][j] = tab[i][m - j - 1];
                tab[i][m - j - 1] = tmp;
		}
	}
}

// Zad 6.2.24
void zad_6_2_24(int n, int m, int tab[][m]) {
	for(int i = 0; i < n; i++) {
		int pom = tab[i][m - 1];
		for(int j = m - 1; j >= 0; j--) {
			tab[i][j] = tab[i][j - 1];
		}
		tab[i][0] = pom;
	}
}

int main() {
//	Test do zad 6.2.11
//	int tab[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
//	printf("%d \n", fun_zad_6_2_11(3, tab));

// Test do zad 6.2.22	
	int arr[2][3] = {{1, 2, 3}, {5, 4, 3}};
	zad_6_2_22(2, 3, arr);
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
// Test do zad 6.2.24
	int tab[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%d ", tab[i][j]);
		}
		printf("\n");
	}
	printf("Po zmianie: \n");
	zad_6_2_24(3, 4, tab);
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%d ", tab[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
