#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Enum, niemutowalny
    enum kierunek {GORA, DOL, LEWO, PRAWO, SKOS = 15};

    // Struktura
    struct struktura {
        int x;
        double y;
    };

    struct struktura s1;
    s1.x = 5;
    s1.y = 2.5;

    printf("%d \n", s1.x);

    typedef int liczba; // nowy typ liczba kt�ry dzia�a jak int

    typedef struct s {
        int x;
    } inna;

    inna a;
    a.x = 5;

    printf("%d", a.x);

    // Unia - u�ywamy tylko jedn� warto�� (deklaruje miejsce tylko dla najwi�kszej zmiennej)
    union Unia {
        int x;
        double y;
    };

    return 0;
}
