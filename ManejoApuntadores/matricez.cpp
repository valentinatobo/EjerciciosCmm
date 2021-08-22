#include <cstdlib>
#include <iostream>

using namespace std;

void LlenadoMatriz(int Q[][5]) //RECIBE DIRECION DE MEMORIA EN 00
{int i, j;
  for(i=0; i<4; i++)
    for(j=0; j<5; j++){
	   if(i==0 & j==0){
	   		Q[i][j]= 1;
	   }else{
			Q[i][j]= 0;
	   }
	   
    }
}

int main(int argc, char *argv[])
{int M[4][5], *Pm, i, j;
    Pm= M[0]; //DIRECCIÓN DE MEMORIA 00
    
    LlenadoMatriz(M); //llena la matriz con 0
    
    //Imprime la matriz con un apuntador
    for(i=0; i<4; i++) //Cambia de fila
      {for(j=0; j<5; j++) //recorre las columnas de la fila
        {cout<< *Pm << " ";
         Pm=Pm+1; //AUMENTA PM QUE ES LA POSICION DE COLUMNA
        }
       cout<<endl;}
       
       cout<<endl;
       
    //Llena matriz con dos for
    for(i=0; i<4; i++)
      for(j=0; j<5; j++)
        M[i][j]= i*j; //LLENA MATRIZ DE FORMA NORMAL MULTIPLICA I*J
        
    
	//imprime la matriz con apuntadores   
    for(i=0; i<4; i++) //indica numero de la fila
      {for(j=0; j<5; j++) //indica el numero de columna en la fila i
        {cout<< *(*(M+i)+j) << " "; //PRIMERO RECORRE EL NUMERO FILA (dm) Y LUEGO EL DE LA COLUMNA
         }
       cout<<endl;}
            
    system("PAUSE");
    return EXIT_SUCCESS;
}
