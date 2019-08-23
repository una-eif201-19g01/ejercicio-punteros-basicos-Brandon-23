#include <iostream>
#include "Punteros.h"

/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main del Ejercicio de punteros básicos
 *
 *        Created:  2019-08-20
 *
 *         Author:  Brandon Alexander Arguedas Murillo brandonxd1970@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

void menu();

int main() {

    menu();

    return 0;
}

void menu() {
    int respuesta = 0;
    int valor = 0;
    char hold;

    do {
        std::cout << "  Menú Calculos con Punteros\n";
        std::cout << "  ====================================\n";
        std::cout << "  1.  Imprimir datos del puntero en un valor de entrada\n";
        std::cout << "  2.  Imprime el número 5 al cubo con función por VALOR\n";
        std::cout << "  3.  Imprime el número 5 al cubo con función por PUNTERO3\n";
        std::cout << "  4.  Imprime el número 5 al cubo con función por REFERENCIA\n";
		std::cout << "  5.  Imprime la raiz cuadrada del numero 5 por VALOR\n";
		std::cout << "  6.  Imprime la raiz cuadrada del numero 5 por PUNTERO\n";
		std::cout << "  7.  Imprime la raiz cuadrada del numero 5 por REFERENCIA\n";
        std::cout << "\n";
        std::cout << "  8.  Exit\n";
        std::cout << "  ====================================\n";
        std::cout << "  Enter your selection: ";
        std::cin >> respuesta;
        std::cout << std::endl;

        switch (respuesta) {
            case 1:
                Punteros::imprimirDatosPuntero();
                std::cin.ignore();
                std::cin.get();
                break;
            case 2:
                Punteros::imprimirCalculoAlCuboReferenciaValor();
                std::cin.ignore();
                std::cin.get();
                break;
            case 3:
                Punteros::imprimirCalculoAlCuboReferenciaPuntero();
                std::cin.ignore();
                std::cin.get();
                break;
            case 4:
                Punteros::imprimirCalculoAlCuboReferenciaReferencia();
                std::cin.ignore();
                std::cin.get();
                break;
			case 5:
				Punteros::imprimirCalculoRaizCuadradaValor();
				std::cin.ignore();
				std::cin.get();
				break;
			case 6:
				Punteros::imprimirCalculoRaizCuadradaPuntero();
				std::cin.ignore();
				std::cin.get();
				break;
			case 7:
				Punteros::imprimirCalculoRaizCuadradaReferencia();
				std::cin.ignore();
				std::cin.get();
            case 8:
                std::cout << "Hasta Luego.\n";
                break;

            default:
                std::cout << respuesta << " es un número inválido\n";

                std::cout << std::endl;
        }
    } while (respuesta != 8);
}



