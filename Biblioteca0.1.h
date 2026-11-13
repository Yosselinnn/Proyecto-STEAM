#ifndef PSTEAM_ES_H
#define PSTEAM_ES_H

#include <iostream>
#include <string>

#define incluir include
#define devolver return
#define principal main

//declaraciones de tipos de datos
using entero=int;
using valor_corto=short;
using valor_grande=long;
using decimal=float;
using doble=double;
using caracter=char;
using palabra=std::string;              
using logica=bool;
using numero_positivo=unsigned;
using numero_negativo=signed;
using vacio=void;

//entradas y salidas
template <typename T> 
    inline void imprimir(const T& valor){
    std::cout <<valor;
    }

template <typename T>
    inline void leer( T& valor){
    std::cin >>valor;
    }

    // estructuras de control
#define si if
#define sino else

#endif  