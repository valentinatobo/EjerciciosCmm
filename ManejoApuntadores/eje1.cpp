#include <cstdlib>
#include <iostream>

using namespace std;

void arreglo(int *p) //recibe como parametro un apuntador a entero 
{	int i;
	for (i=0; i<10; i++) //asigna valores al arreglo ya creado a traves de la direccion de memoria
		p[i]=i*2;
}
     

int main(int argc, char *argv[]){

	int i, a[10], *pa, **ppa;
	for (i=0; i<10; i++) //inicializa con 0 toda la lista
    	a[i]=0;
	pa=a; //asignamos direccion de memoria por que a(nombre arreglo) la guarda
	for (i=0; i<10; i++)
    	cout<< pa[i]<<" ";   //cuando es arreglo no debe llevar * para mostrar el valor al que apunta
	arreglo(pa); //cambia los valores del arreglo
	cout<<endl;
	ppa=&pa; //asigna la dirección de memoria del apuntador a entero del arreglo
	for (i=0; i<10; i++)
		cout<< *(*ppa+i)<<" "; //primero trae la direccion de pa y le aumenta i para luego mostrar el valor (contenido de pa+i)
    system("PAUSE");
    return EXIT_SUCCESS;
}
