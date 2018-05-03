#include <stdio.h>
#include <stdlib.h>
// se pide que ingrese el numero que sea de mas de 2 digitos para que asi pueda invertir el orden
// las variables n, resto e invertir, se van a utilizar par dar los resultados
// n va a ser el numero a evaluar, el cual en resto se sacara el modulo, y sacar el numero entero
// en invertir se multiplicara el numero y se le sumara el resto, para que asi se pueda invertir correctamente, independiente de la cantidad de numeros que se ingresen.
int main (void){
	int n, resto, invertir=0;
	printf ("ingrese un numero de mas de 2 digitos: ");
	scanf ("%d", &n);
	while (n!=0){
		resto=n%10;
		n=n/10;
		invertir=(invertir*10)+resto; 
	
	}
	printf ("el numero invertido es: %d", invertir);

}
