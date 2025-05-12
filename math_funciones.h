#ifndef FUNCIONES_MATEMATICAS_H_INCLUDED
#define FUNCIONES_MATEMATICAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TODO_OK 0
#define ERROR 1
#define TOLERANCIA 0.000000000001

long long factorialFuncion (long long numero);
int combinatoriaFuncion (int m, int n);
float exFuncion (int numero, float tolerancia);
float exponencialFuncion (int numero, int exponente);
float raizCuadradaFuncion (int numero, float tolerancia);
bool buscarEnFibonacciFuncion (int numero);
float senFuncion (float numero, float tolerancia);
bool esDivisorFuncion (int num, int divisor);
int esPerfectoFuncion (int num);

#endif //FUNCIONES_MATEMATICAS_H_INCLUDED