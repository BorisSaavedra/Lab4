#include <stdio.h>
#include <stdlib.h>
//   primero se divide el total de huevos por las 3 personas que los van a comer
//   calculando cuanto come cada uno, se le resta la cantidad de huevos que comen, al aporte realizado por los 2 jovenes
//   luego por regla de 3, utilizando la cantidad de huevos que debio comer Manuel y Juan individualmente, los 80 pesos que tenia que pagar Antonio y la suma total de lo que comio manuel y juan, se calcula lo que le debe pagar antonio, a Manuel y Juan.
float huevoscadauno (){
	float totalhuevos;
	totalhuevos=8.0/3.0;
	return totalhuevos;
	
}

float manuel (float totalhuevos){
	float hmanu;
	hmanu=3.0-totalhuevos;
	return hmanu;
}

float juan (float totalhuevos){
	float hjuan;
	hjuan=5.0-totalhuevos;
	return hjuan;
}

float totalhuevos2 (float hmanu, float hjuan){
	float total;
	total=hmanu+hjuan;
	return total;
}

float total_a_pagar1 (float hmanu, float totalhuevos){
	float totalmanu;
	totalmanu=(hmanu*80)/totalhuevos;
	return totalmanu;
}

float total_a_pagar2 ( float hjuan, float totalhuevos){
	float totaljuan;
	totaljuan=(hjuan*80)/totalhuevos;
	return totaljuan;
}


int main()
{
	float huevosporcadauno;
	huevosporcadauno=huevoscadauno ();
	
	float hmanuel;
	hmanuel=manuel(huevosporcadauno);
	
	float hjuan;
	hjuan=juan (huevosporcadauno);
	
	float total;
	total=totalhuevos2(hmanuel, hjuan);
	
	float totalmanu2;
	totalmanu2=total_a_pagar1(hmanuel, total);
	
	float totaljuan2;
	totaljuan2=total_a_pagar2(hjuan, total);
	
	printf ("total a pagar a manuel= %.f\n", totalmanu2);
	printf ("total a pagar a juan= %.f", totaljuan2);
	return 0;
} 
