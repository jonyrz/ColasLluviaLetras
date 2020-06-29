
#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0
#ifndef _cola_
#define _cola_

typedef struct Nodo_Cola * enlace_cola; //Se crea la estructura de nodo

typedef struct Nodo_Cola 
{ 
	char dato;
	enlace_cola sig;
} Nodo_Cola;

typedef struct Cola //Se crea la estructura para la cola
{
	enlace_cola primero;
	enlace_cola ultimo;
	int tam;
} Cola;

typedef struct Cola * col;

	col CrearCola();
	int esVacia(col c);
	void encolar(col c, char e);
	char desencolar(col c);
	int primero(col c);
	void error(int err);

#endif

