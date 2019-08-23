/*
 * =====================================================================================
 *
 *       Filename:  Punteros.h
 *
 *    Description:  Clase principal para Punteros
 *
 *        Created:  2019-08-20
 *
 *         Author:  Brandon Alexander Arguedas Murillo brandonxd1970@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef PUNTEROSBASICO_PUNTEROS_H
#define PUNTEROSBASICO_PUNTEROS_H


class Punteros {
    static int numeroAlCuboValor(int);
    static int numeroAlCuboPuntero(int *);
    static int numeroAlCuboReferencia(int &);
	static double numeroRaizCuadradaValor(double);
	static double numeroRaizCuadradaPuntero(double *);
	static double numeroRaizCuadradaReferencia(double &);

public:
    Punteros();

    static void imprimirDatosPuntero();
    static void imprimirCalculoAlCuboReferenciaValor();
    static void imprimirCalculoAlCuboReferenciaPuntero();
    static void imprimirCalculoAlCuboReferenciaReferencia();
	static void imprimirCalculoRaizCuadradaValor();
	static void imprimirCalculoRaizCuadradaPuntero();
	static void imprimirCalculoRaizCuadradaReferencia();
};


#endif //PUNTEROSBASICO_PUNTEROS_H
