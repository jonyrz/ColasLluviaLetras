
#include<stdio.h>
#include<stdlib.h>
#include "cola_.h"

void error(int err) //Manda el mensaje correspondiente al numero ingresado al llamar la funcion
{
	char * errores[]={"La cola esta vacia", "La cola esta llena", "No hay memoria suficiente"};
	printf("%s\n", errores[err-1]);
}

col CrearCola() //Reserva la memoria para cola 
{
	col c;
	c=(col)malloc(sizeof(Cola));
	if(c==NULL)
	{
		error(3);
		exit(0);
	}
	c->primero=NULL;
	c->ultimo=NULL;
	c->tam=0;
}

int esVacia(col c) //Revisa si la cola es vacia
{
	if(c->primero == NULL)
		return True;
	else
		return False;
}

void encolar(col c, char e) //Añade un elemento a la cola
{
	enlace_cola nvo;
	nvo=(enlace_cola)malloc(sizeof(Nodo_Cola));
	if(nvo==NULL)
	{
		error(3);
		exit(0);
	}
	nvo->dato = e;
	nvo->sig=NULL;
	if(c->primero==NULL)
		c->primero=nvo;
	else
	c->ultimo->sig=nvo;
	c->tam=c->tam+1;
	c->ultimo=nvo;
}

char desencolar(col c) //Extrae el primer elemento de la cola
{
	char e;
	enlace_cola nvo;
	if(c->primero==NULL)
	{
		error(3);
		exit(0);
	}
	else
	{
		nvo=c->primero;
		e=nvo->dato;
		c->primero=nvo->sig;
		free(nvo);
		c->tam=c->tam-1;
	}
	return e;
}

int primero(col c) //Extrae el primer dato de la cola
{
	char e;
	if(c->primero == NULL)
	{
		error(3);
		exit(0);
	}
	else
		e=c->primero->dato;
	return e;
}



