#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element * next;
};

// Pusta lista bez g³owy
// Zad 7.3.1
void zad_7_3_1() {
    struct element * lista = NULL;
}


// Zad 7.3.5
struct element * dodajw(struct element *Lista, struct element * elem, int a) {
    struct element * arr = malloc(sizeof(struct element));
    arr->i = a;
    if(elem == NULL) {
        arr->next = Lista;
        Lista = arr;
    } else {
        arr->next = elem->next;
        elem->next = arr;
    }

    return Lista;
};


// Pusta lista z g³ow¹
// Zad 7.3.10
struct element * utworz() {
    struct element * lista = malloc(sizeof(struct element));
    lista->next = NULL;
    return lista;
};

// Napisz funkcjê dodajw o trzech argumentach Lista oraz elem typu
// element* i a typu int. Funkcja powinna dodawaæ element o wartoœci
// a pola i do listy reprezentowanej przez zmienn¹ Lista na miejscu tu¿
// za elementem wskazywanym przez elem
// Zad 7.3.14
void dodajw_zad_7_3_14(struct element * Lista, struct element * elem, int a) {
    struct element * arr = malloc(sizeof(struct element));
    arr->i = a;
    arr->next = elem->next;
    elem->next = arr;
}

// Zad 7.3.18
void usunw(struct element * Lista, struct element * elem) {
    struct element * wsk;
    while(Lista->next != NULL && Lista->next != elem) {
        Lista = Lista->next;
        wsk = Lista->next;
        Lista->next = wsk->next;
        free(wsk);
    }
};

// Zad 7.3.22
struct trojkat {
    double a, b, c, pole;
    struct trojkat * next;
};

void pole_glowa(struct trojkat * tro) {
    struct trojkat * wsk = malloc(sizeof(struct trojkat));
    wsk = tro->next;

    while(wsk != NULL) {
        double a = wsk->a;
        double b = wsk->b;
        double c = wsk->c;

        double p = (a + b + c) / 2;
        wsk->pole = sqrt(p * (p - a) * (p - b) * (p - c));

        wsk = wsk->next;
    }
}

void pole_bez_glowy(struct trojkat * tro) {

}

// Zad 7.3.26
struct element * minimum(struct element * Lista) {
    struct element * min = Lista;
    while(Lista != NULL) {
        if(Lista->i < min->i) {
            min = Lista;
        }
        Lista = Lista->next;
    }
    return min;
};

struct element * minimum_glowa(struct element * Lista) {
    struct element * min = malloc(sizeof(struct element));
    min->next = Lista;
    while(Lista != NULL) {
        if(Lista->i < min->i) {
            min = Lista;
        }
        Lista = Lista->next;
    }
    return min;
};

// Zad 7.3.30
struct element * doklej(struct element * Lista1, struct element * Lista2) {
    struct element * current = malloc(sizeof(struct element));
    current = Lista1;

    if(Lista1 == NULL) {
        return Lista2;
    }

    while(current->next != NULL) {
        current = current->next;
    }
    current->next = Lista2;

    return Lista1;
};


int main()
{
    // Lista z g³ow¹
    // struct element * list1 = malloc(sizeof(struct element));
    // list1->next = NULL;

    // Lista bez g³owy
    struct element * list1 = malloc(sizeof(struct element));
    list1->i = 1;
    list1->next = NULL;

    struct element * list2 = malloc(sizeof(struct element));
    list2->i = 5;
    list2->next = NULL;
    // list1->next = list2;

    struct element * list3 = malloc(sizeof(struct element));
    list3->i = 10;
    list3->next = NULL;
    list1->next = list3;

    doklej(list1, list2);

    struct element * current = list1;

    while(current != NULL) {
        printf("%d \n", current->i);
        current = current->next;
    }


    return 0;
}
