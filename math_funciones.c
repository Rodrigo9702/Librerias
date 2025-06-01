#include "math_funciones.h"

long long factorialFuncion (long long numero)
{
    long long fact = 1;
    if ( numero < 0)
        return 0;
    for (; numero > 1; numero--)
        fact *= numero;
    return fact;
}

int combinatoriaFuncion (int m, int n)
{
    int resultado;
    resultado = (factorialFuncion(m))/(factorialFuncion(n)*factorialFuncion(m-n));
    return resultado;
}

float exponencialFuncion (int numero, int exponente)
{
    float resultado = numero;
    if (exponente == 0)
        resultado = 1;
    else
        if (exponente > 0)
        {
            for (;exponente > 1; exponente--)
                resultado *= numero;
        }
        else
        {
            for (;(exponente * (-1)) > 1; exponente--)
                resultado *= numero;
            resultado = 1/resultado;
        }
    return resultado;
}

float exFuncion (int numero, float tolerancia)
{
    float termino, resultado = 1;
    int exponente = 1;
    do
    {
        termino = exponencialFuncion(numero,exponente)/(factorialFuncion(exponente));
        resultado += termino;
        exponente++;
        if (termino < 0)
            termino *= (-1);
    } while (termino >= tolerancia);
    return resultado;
}

float raizCuadradaFuncion (int numero, float tolerancia)
{
    float resultado = 1, termino, comp;
    if (numero == 1)
        return resultado;
    if (numero == 0)
        return 0;
    termino = resultado;
    do
    {
        resultado = termino;
        termino = (resultado+(numero/resultado))/2;
        comp = termino - resultado;
        if (comp < 0)
            comp *= (-1);
    } while (comp > tolerancia);
    return resultado;
}

bool buscarEnFibonacciFuncion (int numero)
{
    int fibonacci[3] = {1,1,1};
    while (numero != fibonacci[2] && numero >= fibonacci[2])
    {
        fibonacci[0] = fibonacci[2];
        fibonacci[2] = fibonacci[0] + fibonacci[1];
        fibonacci[1] = fibonacci[0];
    }
    if (numero < fibonacci[2])
        return false;
    return true;
}

float senFuncion (float numero, float tolerancia)
{
    float resultado = 0, termino = numero;
    int i = 1, signo = 0;
    do
    {
        if (signo == 0)
        {
            resultado += termino;
            signo = 1;
        }
        else
        {
            resultado -= termino;
            signo = 0;
        }
        i += 2;
        termino = (exponencialFuncion(numero, i))/factorialFuncion(i);
        printf ("El resultado es %f\n\n",resultado);
        printf ("El termino es %f\n\n",termino);
    } while (termino >= tolerancia);
    return resultado;
}

bool esDivisorFuncion (int num, int divisor)
{
    if (num % divisor == 0)
        return true;
    else
        return false;
}

int esPerfectoFuncion (int num)
{
    int resultado = 0,div = 1;
    while (div < num)
    {
        if (esDivisorFuncion(num, div) == true)
            resultado += div;
        div++;
    }
    return resultado;
}

int productoPorSumaSucesivasFuncion (int numero, int multiplicador)
{
    int resultado = 0;
    if (multiplicador == 0)
        return 0;
    for (int i = 0; i < multiplicador; i++)
        resultado += numero;
    return resultado;
}

int cocienteFuncion (int numero, int divisor)
{
    int i = 1;
    while (i*divisor <= numero)
        i++;
    i--;
    return i;
}

int restoFuncion (int numero, int divisor)
{
    return numero-(divisor*cocienteFuncion(numero, divisor));
}
