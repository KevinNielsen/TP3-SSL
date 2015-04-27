/*
 *Trabajo Practico 3
 *Curso: K2051
 *Prof: Jose Maria Sola
 *Alumno: Kevin Nielsen
 *Entrega 27/4/15
*/
#include<stdio.h>

#define DESDE 0
#define HASTA 300
#define SALTO 20

float GetCelsius ( int fahr)
{
	float celsius;
	celsius= 0.0;
	celsius = (5.0/9.0)*(fahr-32);
	return celsius;
}

main()
{
int fahr;
for (fahr = DESDE; fahr <= HASTA; fahr = fahr + SALTO)
printf("%3d %6.1f\n", fahr, GetCelsius(fahr));
}
