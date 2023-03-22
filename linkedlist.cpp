#include <iostream>

struct Nodo {
   int data;
   struct Nodo *prossimo_el;
};

struct Nodo* inizio = nullptr;
void inserisci(int d) {
   struct Nodo* n_nodo = (struct Nodo*) malloc(sizeof(struct Nodo));
   n_nodo->data = d; n_nodo->prossimo_el = inizio; inizio = n_nodo;
}
void mostra() {
   struct Nodo* ptr;
   ptr = inizio;
   while (ptr != nullptr) { // Per ogni elemento della lista fino a che non raggiunge il terminatore NULL
      std::cout<< ptr->data <<" ";
      ptr = ptr->prossimo_el;
   }
}
int main() {
   for (unsigned int i=0; i<10; i++) {
       inserisci(i);
   }
   mostra();
   return 0;
}