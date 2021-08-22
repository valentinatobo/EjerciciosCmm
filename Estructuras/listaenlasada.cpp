#include <cstdlib>
#include <iostream>

using namespace std;

template <class N>
struct nodo{N num; nodo<N> *apun;
};

template <class N>
nodo<N> imprimir(nodo<N> **ap){
	do{
		cout<<(*ap)->num<<endl;//muestra el contenido del apuntador  
		*ap = (*ap)->apun;//le asigna la dirección del nodo (sig estructura)
	}while ((*ap) != NULL);
}

template <class N>
void creaNodo(N var, nodo<N> **ap){
	nodo<N> *aux = new nodo<N>;
	aux->num = var; //valor numerico
	aux->apun = *ap; //dirección numero o null
	*ap = aux; //asigna dirección del nuevo numero
}

int main()
{
	
	nodo<int> *p, **pp;
	p = NULL; //apuntador que enlaza la lista
	pp = &p; //apuntador a apuntador inicial
		
	cout<<"El contenido de la lista numerica es: "<<endl;
	creaNodo(6,pp);
	creaNodo(9,pp);
	creaNodo(12,pp);
	creaNodo(18,pp);
	imprimir(pp);

	nodo<char> *q, **qq;
	q = NULL;
	qq= &q;
	creaNodo('a',qq);
	creaNodo('b',qq);
	creaNodo('c',qq);
	creaNodo('d',qq);
	cout<<"El contenido de la lista de caracteres es: "<<endl;
	imprimir(qq);

    return 0;
}
