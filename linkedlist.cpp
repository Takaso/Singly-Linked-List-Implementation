#include <iostream>
#include <time.h>

struct Nodo {
    int data;
    struct Nodo *prossimo_el;
};
struct Nodo* inizio = nullptr; // Testa del nodo
void inserisci(int d) {
    struct Nodo* n_nodo = (struct Nodo*) malloc(sizeof(struct Nodo)); // Crea spazio nello stack per ogni nodo
    n_nodo->data = d; n_nodo->prossimo_el = inizio; inizio = n_nodo;
}
void mostra() {
    struct Nodo* ptr; ptr = inizio;
    while (ptr != nullptr) { // Per ogni elemento della lista fino a che non raggiunge il terminatore NULL
        std::cout<<ptr->data<<"\n";
        ptr = ptr->prossimo_el;
    }
}
int main() {
    srand(time(NULL));
    for (unsigned int _=0; _<69; _++) { // Inserisce 69 valori randomici nel nodo
        inserisci(rand());
    }
    mostra();
    return 0;
}
